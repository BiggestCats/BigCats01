#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
    
    int die1, die2;
    /*This is a test program to create a method of automating calyxes for WWN.
    A calyx is a collecttion of 1 or more spells of various levels that can be 
    used by a character to cast them. 
    This project requires:
    1. A collection of the names of the calyxes, perhaps read from a txt file.
    2. A means of randomly selecting spell names.
    3. Outputting a text file that contains the list and numbers of spells.*/

    //to get system time
    unsigned seed = time(0); 

    //to set the seed
    srand(seed);

    /* First the die must be rolled to determine what the contents of the calyx are,
    which could be a single spell or a random number of other spells.*/

    cout << "Rolling on first table."<< endl;
    die1 = rand()%20 +1;
    if (die1 <= 6){
        cout << "One first level spell.\n";
    }
    else if (die1 <= 10){
        cout << "One second level spell.\n";
    }
    else if (die1 <=13){
        cout << "One third level spell.\n";
    }
    else if (die1 <= 15){
        cout << "One fourth level spell.\n";
    }
    else if (die1 == 16){
        cout << "One fifth level spell.\n";
    }
    else if (die1 == 17){
        cout << "1d4 spells, none above second level.\n";
    }
    else if (die1 == 18){
        cout << "2d4 spells, none above third.\n";
    }
    else if (die1 == 19){
        cout << "2d6 spells, none above fourth.\n";
    }
    else if (die1 ==20){
        cout << "2d8 spells, none above fifth.\n";
    }
}