#include <iostream>
using namespace std;

void showArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << "\t";
    cout << endl;
}

void mergSort(int array[], int size)
{
    //----------------|POINT
    int mid = size / 2 - 1, resArray[size];

    int ixx = 0, midI = mid + 1, ix = 0, i = 0;
    while (ixx <= mid && midI < size)
    {
        if (array[ixx] <= array[midI])
        {
            resArray[ix] = array[ixx];
            ixx++;
        }
        else
        {
            resArray[ix] = array[midI];
            midI++;
        }
        ix++;
    }

    if (ixx > midI)
    {
        for (i = midI; i < size; i++)
        {
            resArray[ix] = array[i];
            ix++;
        }
    }
    else
    {
        for (i = ixx; i <= mid; i++)
        {
            resArray[ix] = array[i];
            ix++;
        }
    }

    cout << "Array after  Sorting :: ";
    showArray(resArray, size);
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

    mergSort(array, size);

    return 0;
}