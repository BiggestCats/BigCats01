#include <iostream>
#include <vector>
using namespace std;

int main(){
    /*for this code we need a vector that can be expanded with each iteration
    we take the vector, and add adjacent values to each other to produce a new vector
    then add '1' to either end
    1 4 6 4 1
    5 10 10 5
    1 5 10 10 5 1
    this continues for every iteration up to our input n
    */

    int nth;
    vector<int> coeff = {1, 1};
    int binomial[2] = {0, 0};
    int sum = 0;

    cout << "Please assign the starting coefficients for your x and y.\n";
    cin >> binomial[1] >> binomial[2];
    cout << "What degree will you raise the binomial to?\n";
    cin >> nth;

    if (nth == 0){
        cout << "Go fuck yourself.\n";
        return 0;
    }

    for (int i = 1; i < nth; i++){
        for (auto iter = coeff.begin(); iter != coeff.end(); iter++){
            sum = *iter;
            iter++;
            sum += *iter;
            iter--;
            *iter = sum;
        }
        coeff.push_back(1);
        auto iter = coeff.end();
        *iter = 1;
    }

    cout << "The " << nth << " level of Pascal's triangle is:" << endl;

    for (auto iter = coeff.begin(); iter != coeff.end(); iter++){
        cout << *iter << " ";
    }
    cout << endl;

}