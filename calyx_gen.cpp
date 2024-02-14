#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
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
}