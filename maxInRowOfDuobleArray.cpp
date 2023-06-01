
#include <iostream>
using namespace std;

void mInput(int[][2], int);
void mCal(int mat[][2], int);
int main()
{
  const int r = 3, c = 2;
  int mat[r][c];
  mInput(mat, r);
  mCal(mat, r);
}
void mInput(int mat[][2], int r)
{
  int i, j;
  for (i = 0; i < r; i++)
    for (j = 0; j < 2; j++)
    {
      cout << "Enter mat[" << i << "][" << j << "] : ";
      cin >> mat[i][j];
    }
}
void mCal(int mat[][2], int r)
{
  int i, j, rmax;
  cout << " ROW \t\tMAX";
  cout << "\n-------------------";
  for (i = 0; i < r; i++)
  {
    rmax = mat[i][0];
    for (j = 1; j < 2; j++)
      if (mat[i][j] > rmax)
        rmax = mat[i][j];
    cout << "\n " << (i + 1) << "\t\t " << rmax;
  } // end of for
}
