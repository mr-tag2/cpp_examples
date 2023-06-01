#include <iostream>
using namespace std;

int main()
{
    int i, ix, j, jx, arr[100], tmp;

    cout << "==================UnSort Number==========================\n";

    for (i = 0; i < 100; i++)
    {
        arr[i] = (rand() % 100);
        cout << arr[i] << "  ";

        if ((i + 1) % 10 == 0)
            cout << endl;
    }

    for (ix = 99; ix > 0; ix--)
        for (j = 0; j < ix; j++)
            if (arr[j] > arr[j + 1])
            {
                tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }

    cout << "==================Sort Number==========================\n";
    
    for (jx = 0; jx < 100; jx++)
    {
        cout << arr[jx] << "  ";
        if ((jx + 1) % 10 == 0)
            cout << endl;
    }

    return 0;
}
