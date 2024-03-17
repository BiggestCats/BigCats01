#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int die(int max);
int calyx_tot(int roll);
int max_lv(int roll);

int die(int max){
    int result;
    result = rand()%max + 1;
    return result;
}

int calyx_tot(int roll){
    int tot_arr[] = {1, 4, 8, 12, 16};
    int result;
    if (roll <= 16){
        result = tot_arr[0];
    } else if (roll == 17){
        result = tot_arr[1];
    } else if (roll == 18){
        result = tot_arr[2];
    } else if (result == 19){
        result = tot_arr[3];
    } else if (result == 20){
        result = tot_arr[4];
    }
    cout << "The calyx can have up to " << result << " spells.\n";
    return result;
}

int max_lv(int roll){
    int result;
    if (roll <= 6){
        result = 1;
    } else if (((roll >= 6)&&(roll <= 10))||(roll == 17)){
        result = 2;
    } else if (((roll >= 11)&&(roll <=13))||(roll == 18)){
        result = 3;
    } else if ((roll == 14)||(roll==15)||(roll == 19)){
        result = 4;
    } else {
        result = 5;
    }
    cout << "Max spell level is " << result << endl;
    return result;
}