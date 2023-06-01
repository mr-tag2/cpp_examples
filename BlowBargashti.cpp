#include <iostream>
using namespace std;

int sum(int no, int c)
{
    if (c == 0)
        return 0;
    else 
        return (no + sum(no, --c));
}

int main()
{
    int No, C;
    cout << "Enter Your No and Coefficient : ";
    cin >> No >> C;
    cout << "YorNO :: " << No << "   Result :: " << sum(No, C);

    return 0;
}
