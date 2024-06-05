#include <iostream>
using namespace std;

int main(){
    int n1, n2, i;

    do{
        cout << "Enter two numbers between 0 and 100.\n";
        cin >> n1 >> n2;
    } while ((n1 < 0) || (n1 > 100) || (n2 > 100) || (n2 < 0));

    if (n1%2){
        i = n1+1;
    } else {
        i = n1;
    }
    do{
        cout << i << " ";
        i = i+2;
    } while (i <= n2);
    cout << "Complete.\n";
}