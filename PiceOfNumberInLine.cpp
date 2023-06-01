#include <iostream>
using namespace std;

void f(int x);
int main()
{

    int m = 0;
    cout << "Enter a Number : ";
    cin >> m;
    f(m);
    return 0;
}

void f(int x)
{
    if (x < 10)
        cout << x << endl;
    else
    {
        f(x / 10);
        cout << x % 10 << endl;
    }
}