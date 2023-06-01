#include <iostream>
using namespace std;

void showArray(int array[], int size)
{
    for (int i = 0; i < size; i++)
        cout << array[i] << "\t";
    cout << endl;
}

void selectionSort(int array[], int size)
{
    int i, j, min, temp = 0;

    for (i = 0; i < size - 1; i++)
    {
        min = i;

        for (j = i + 1; j < size; j++)
            if (array[j] < array[min])
                min = j;
        
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}

int main()
{
    int arr[5], i;

    for (i = 0; i < 5; i++)
    {
        cout << "Enter Num " << i + 1 << " :: ";
        cin >> arr[i];
    }

    cout << "Array before Sorting :: ";
    showArray(arr, 5);
    selectionSort(arr, 5);
    
    cout << "Array after Sorting  :: ";
    showArray(arr, 5);
}