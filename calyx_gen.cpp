#include "dice.hpp"

int main(){
    int die_max, calyx_max, spell_lv_max;
    int result;
    /*This is a test program to create a method of automating calyxes for WWN.
    A calyx is a collection of 1 or more spells of various levels that can be 
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
    cout << "Beginning generation.\n";
    result = die(20);
    calyx_max = calyx_tot(result);
    spell_lv_max = max_lv(result);
}