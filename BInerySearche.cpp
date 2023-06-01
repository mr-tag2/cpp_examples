#include <iostream>
using namespace std;
void inputData(int[], int);
int binarySearch(int[], int, int);
int main()
{
    const int k = 5;
    int st[k], no, res;
    inputData(st, k);
    cout << "Enter a student # to search : ";
    cin >> no;

    cout << "\nResult of binarry search : ";

    res = binarySearch(st, k, no);
    if (res == -1)
        cout << "Number " << no << " not exist in list.";
    else
        cout << "Number " << no << " exist in list."
             << "this Index is " << res;
}

void inputData(int st[], int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        cout << "Enter student number " << (i + 1) << " : ";
        cin >> st[i];
    } //end of for
}

int binarySearch(int st[], int len, int no)
{
    int mid, low = 0, high = len - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (no < st[mid])
            high = mid - 1;
        else if (no > st[mid])
            low = mid + 1;
        else
            return mid;
    }
    return -1;
}
