#include <iostream>
using namespace std;

int main()
{

    int No1, No2, Temp;
    cout << "Enter 2 number for get GCD :: ";
    cin >> No1 >> No2;
    while (No2 != 0)
    {
        Temp = No1 % No2;
        No1 = No2;
        No2 = Temp;
    }

    cout << "your GCD for this number ::" << No1;

    return 0;
}