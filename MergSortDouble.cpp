#include <iostream>
using namespace std;

void getArray(int array[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        cout << "Enter Num " << i + 1 << " :: ";
        cin >> array[i];
    }
}

void showArray(int array[], int size)
{
    cout << "==> ";
    for (int i = 0; i < size; i++)
        cout << array[i] << "\t";
    cout << endl;
}

void mergSort(int fArray[], int s1, int sArray[], int s2)
{
    int size = s1 + s2;
    int resArray[size];
    int fI = 0, sI = 0, rI = 0, i = 0;

    while (fI < s1 && sI < s2)
    {
        if (fArray[fI] <= sArray[sI])
        {
            resArray[rI] = fArray[fI];
            fI++;
        }
        else
        {
            resArray[rI] = sArray[sI];
            sI++;
        }
        rI++;
    }

    if (fI < s1)
    {
        for (i = fI; i < s1; i++)
        {
            resArray[rI] = fArray[i];
            rI++;
        }
    }
    else
    {
        for (i = sI; i < s2; i++)
        {
            resArray[rI] = sArray[i];
            rI++;
        }
    }
    cout << "Result Array after  Sorting :: \n";
    showArray(resArray, size);
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
    }
    cout << endl;
}

int main()
{
    int s1, s2;

    cout << "Enter Size Of First Number  :: ";
    cin >> s1;
    cout << "Enter Size Of Second Number :: ";
    cin >> s2;

    int fArray[s1], sArray[s2];

    cout << "Get First Array :: \n";
    getArray(fArray, s1);
    cout << "Get Second Array:: \n";
    getArray(sArray, s2);

    cout << "First Array before Sorting  :: \n";
    showArray(fArray, s1);
    cout << "Second Array before Sorting :: \n";
    showArray(sArray, s2);

    cout << "First Array After Sorting  :: ";
    insertionSort(fArray, s1);
    showArray(fArray, s1);
    cout << "Second Array After Sorting :: ";
    insertionSort(sArray, s2);
    showArray(sArray, s2);

    mergSort(fArray, s1, sArray, s2);

    return 0;
}
