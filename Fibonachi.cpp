#include <iostream>
using namespace std;

int main()
{
    int resultNo = 0, oneNo = 1, twoNo = 1, counter = 10, i;

    for (i = 0; i < counter; i++)
    {
        if (i == 0 || i == 1)
            cout << 1 << "  ";
        else
        {
            resultNo = oneNo + twoNo;
            cout << resultNo << "  ";
            oneNo = twoNo;
            twoNo = resultNo;
        }
    }

    return 0;
}