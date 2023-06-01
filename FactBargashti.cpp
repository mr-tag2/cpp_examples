#include <iostream>
using namespace std;

int fact(int f)
{
    if (f != 0)
        return (f * fact(f - 1));
    else
        return 1;
}

int main()
{
    int f;
    cout << "Enter Your No : ";
    cin >> f;
    cout << "YorNO :: " << f << "   Result :: " << fact(f);

    return 0;
}
