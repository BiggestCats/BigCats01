#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int die(int max);
int calyx_tot(int roll);

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