#include <iostream>
using namespace std;
void m(int a, int b, int c)
{
  int max;
  if (a > b)
    max = a;
  else
    max = b;
  if (max > c)
    max = max;
  else
    max = c;
  cout << "max =" << max << endl;
}
int main()
{
  int x, y, z;
  cout << "3 adad vared konid : ";
  cin >> x >> y >> z;
  m(x, y, z);
  return 0;
}