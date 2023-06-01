#include <iostream>
using namespace std;

void showArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << "\t";
    cout << endl;
}

void mergFunc(int array[], int tempArray[], int low, int mid, int hight)
{

    for (int ix = low; ix <= hight; ix++)
        tempArray[ix] = array[ix];

    int i = low, j = mid + 1;
    for (int ix = low; ix <= hight; ix++)
        if (i > mid)
            array[ix] = tempArray[j++];
        else if (j > hight)
            array[ix] = tempArray[i++];
        else if (tempArray[j] < tempArray[i])
        {
            array[ix] = tempArray[j];
            j++;
        }
        else
        {
            array[ix] = tempArray[i];
            i++;
        }
}

void sortFunc(int array[], int tempArray[], int low, int hight)
{
    if (hight <= low)
        return;

    int mid = low + (hight - low) / 2;
    sortFunc(array, tempArray, low, mid);
    sortFunc(array, tempArray, mid + 1, hight);
    mergFunc(array, tempArray, low, mid, hight);
}

void mergSort(int array[], int size)
{
    int tempArray[size];
    sortFunc(array, tempArray, 0, size - 1);
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

    cout << "Array after  Sorting :: ";
    showArray(array, size);
    return 0;
}