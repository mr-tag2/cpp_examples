#include <iostream>
using namespace std;

int fib(int a);

int main()
{
    int counter = 0;
    cout << "Enter Number Of Fibonachi ::";
    cin >> counter;
    for (int i = 1; i <= counter; i++)
    {
        cout << fib(i) << "\t";
        if (i % 10 == 0)
            cout << endl;
    }
    return 0;
}

int fib(int a)
{
    if (a == 0 || a == 1)
        return a;
    else
        return fib(a - 1) + fib(a - 2);
}
