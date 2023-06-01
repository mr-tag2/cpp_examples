#include <iostream>
using namespace std;
bool prime(int);
int main()
{
     int number;
     char ans;
     while (true)
     {
          cout << "\n enter yuor number";
          cin >> number;
          if (prime(number))
               cout << "\n number" << number << "is prime";
          else
               cout << "\n number" << number << "is not prime";
          cout << "\n do yuo want to continue ?(y/n)";
          cin >> ans;
          if (ans != 'y')
               break;
     }
     return 0;
}
bool prime(int number)
{
     int i, temp = 1;
     for (i = 2; (i <= number / 2) && temp; i++)
          if (number % i == 0)
               temp = 0;
     return temp;
}
