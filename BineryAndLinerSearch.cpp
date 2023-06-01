#include <iostream>
using namespace std;
void inputData(int[], int);
void bubbleSort(int[], int);
int linearSearch(int[], int, int);
int binarySearch(int[], int, int);
int main()
{
   const int k = 5;
   int st[k], no;
   inputData(st, k);
   cout << "Enter a student # to search : ";
   cin >> no;
   cout << "Result of linear search : ";

   if (linearSearch(st, k, no) == -1)
      cout << " Number " << no << " not exist in list.";
   else
      cout << " Number " << no << " exist in list.";
   bubbleSort(st, k);
   cout << "\nResult of binarry search : ";

   if (binarySearch(st, k, no) == -1)
      cout << "Number " << no << " not exist in list.";
   else
      cout << "Number " << no << " exist in list.";
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

void bubbleSort(int st[], int len)
{
   int i, j, item;
   for (i = len - 1; i > 0; i--)
   {
      for (j = 0; j < i; j++)
      {
         if (st[j] > st[j + 1])
         {
            item = st[j];
            st[j] = st[j + 1];
            st[j + 1] = item;
         } //end of if
      }
   }
}

int linearSearch(int st[], int len, int no)
{
   int i;
   for (i = 0; i < len; i++)
      if (st[i] == no)
         return i;
   return -1;
}
