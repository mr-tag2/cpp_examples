#include <iostream>
using namespace std;

void showArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << "\t";
    cout << endl;
}

void insertionSort(int array[], int size)
{
    int No, ix, i;
    for (ix = 1; ix < size; ix++)
    {
        No = array[ix];

        for (i = ix - 1; (i >= 0) && (array[i] > No); i--)
            array[i + 1] = array[i];

        array[i + 1] = No;

        cout << "Array Step " << ix << " Sorting :: ";
        showArray(array, size);
    }
    cout << endl;
}

int main()
{
    int size, i;

    cout << "Enter Size Of Number :: ";
    cin >> size;

    // int array[size];
    int *array;
    array = new int[size];

    for (i = 0; i < size; i++)
    {
        cout << "Enter Num " << i + 1 << " :: ";
        cin >> array[i];
    }

    cout << "Array before Sorting :: ";
    showArray(array, size);
    cout << endl;

    insertionSort(array, size);

    cout << "Array after  Sorting :: ";
    showArray(array, size);
    return 0;
}