#include <iostream>
using namespace std;

void bubbleSort(int array[5])
{
    int tmp, i, ix;
    for (i = 4; i > 0; i--)
        for (ix = 0; ix < i; ix++)
            if (array[ix] > array[ix + 1])
            {
                tmp = array[ix];
                array[ix] = array[ix + 1];
                array[ix + 1] = tmp;
            }
}

int main()
{
    int array[5], i, ix;

    for (i = 0; i < 5; i++)
    {
        cout << i << "==> ";
        cin >> array[i];
    }

    for (ix = 0; ix < 5; ix++)
        cout << ix << "  ==> " << array[ix] << "\t";

    cout << "\n=========================================\n";

    bubbleSort(array);

    for (ix = 0; ix < 5; ix++)
        cout << ix << "  ==> " << array[ix] << "\t";

    cout << "\n=========================================\n";

    return 0;
}
