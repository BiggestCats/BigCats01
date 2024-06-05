#include <iostream>
using namespace std;

int main()
{
    int num = 0;

    cout << "Input number\n";
    cin >> num;
    while ((num <= 0) || (num >= 100)){
        cin >> num;
    }
    cout << num;
}