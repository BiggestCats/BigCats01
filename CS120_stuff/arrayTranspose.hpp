#include <iostream>
#include <fstream>
#include <vector>
using namespace std;

const int N = 3;
const int M = 5;
void reform(string);

void reform(string filename)
{
    ifstream data; //create object for new file
    data.open(filename); //create txt file using filename
    int numbers[100]; //IDEA: Replace with vector to expand easily
    
    /* this code sends data from the file to the array numbers
    and keeps count of how many elements have been added*/
    int count = 0; 
    while (data >> numbers[count]){
        count +=1;
    }
    data.close();

    int rows = 5; //IDEA: allow for user to input desired number of rows
    int cols = count/rows; //perhaps validate to ensure there is enough elements
    count = 0; //reset counter to zero to increment.
    int transArray[rows][cols]; //create 2D array
    // assigns values DOWN THE COLUMNS from numbers[]
    for (int j = 0; j < cols; j++){
        for (int k = 0; k < rows; k++){
            transArray[k][j] = numbers[count];
            count +=1;
        }
    }

    //used swap function and bubble sort to exchange cols based on first row
    for (int k = 0; k < (cols-1); k++){
        for (int i = 0; i < (cols-1); i++){
            if (transArray[0][i] > transArray[0][i+1]){
                for (int j = 0; j < rows; j++){
                    swap(transArray[j][i], transArray[j][i+1]);
                }
            }
        }
    }
    
    //creates a new txt file to assign values 
    //while preserving format
    ofstream output;
    output.open("trans.data");
    for (int j = 0; j < rows; j++){
        for (int k = 0; k < cols; k++){
            output << transArray[j][k];
            output << " ";
        }
        output << endl;
    }
    output.close();
}
