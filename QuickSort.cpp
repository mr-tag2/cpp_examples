#include <iostream>
using namespace std;

void showArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << "\t";
    cout << endl;
}

int tempSorting(int array[], int first, int last, int size)
{
    int temp,
        x = array[first],
        i = first, ix;

    for (ix = first + 1; ix <= last; ix++)
    { //1         //0
        if (array[ix] <= x)
        {
            i++;
            temp = array[ix];
            array[ix] = array[i];
            array[i] = temp;
            cout << "Array Step in  " << i << "  " << ix << " Sorting :: ";
            showArray(array, size);
        }
    }
    temp = array[i];
    array[i] = array[first];
    array[first] = temp;
    cout << "Array Step out " << i << "  " << ix << " Sorting :: ";
    showArray(array, size);

    return i;
}

void quickSort(int array[], int first, int last, int size)
{
    int indexTemp;
    if (first < last)
    {
        indexTemp = tempSorting(array, first, last, size);
        quickSort(array, first, indexTemp - 1, size);
        quickSort(array, indexTemp + 1, last, size);
    }
}

int main()
{
    int size, i;

    cout << "Enter Size Of Number :: ";
    cin >> size;

    int array[size];

    for (i = 0; i < size; i++)
    {
        cout << "Enter Num " << i + 1 << " :: ";
        cin >> array[i];
    }

    cout << "Array before Sorting :: ";
    showArray(array, size);
    cout << endl;

    quickSort(array, 0, size - 1, size);

    cout << "\nArray after  Sorting :: ";
    showArray(array, size);
    return 0;
}