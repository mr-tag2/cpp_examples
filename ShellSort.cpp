#include <iostream>
using namespace std;

void showArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << "\t";
    cout << endl;
}

void shellSort(int array[], int size)
{
    //1 2 3 4 6 7
    int No, ix, i, j;
    for (j = size / 2; j > 0; j /= 2)
        for (ix = j; ix < size; ix++)
            for (i = ix - j; i >= 0; i -= j)
                if (array[i] > array[i + j])
                {
                    No = array[ix];
                    array[ix] = array[i];
                    array[i] = No;
                }
                else
                    break;
}

int main()
{
    int size, i;

    cout << "Enter Size Of Number :: ";
    cin >> size;

    int array[size];
    // int *array;
    // array = new int[size];

    for (i = 0; i < size; i++)
    {
        cout << "Enter Num " << i + 1 << " :: ";
        cin >> array[i];
    }

    cout << "Array before Sorting :: ";
    showArray(array, size);
    cout << endl;

    shellSort(array, size);

    cout << "Array after  Sorting :: ";
    showArray(array, size);
    return 0;
}