#include <iostream>
using namespace std;
int stack[5], size = 5, top = -1;

void push(int val)
{
    if (top >= size - 1)
    {
        cout << "Stack Overflow" << endl;
        return;
    }

    stack[++top] = val;
}

void pop()
{
    if (top <= -1)
    {
        cout << "Stack Empty" << endl;
        return;
    }

    cout << "The Value Removed is " << stack[top] << endl;
    stack[top--] = 0;
}

void showArray()
{
    for (int i = 0; i < size; i++)
        cout << stack[i] << "\t";
    cout << endl;
}

int main()
{
    int flag, value;
    cout << "1) Add" << endl
         << "2) Remove" << endl
         << "3) Show" << endl
         << "4) Exit" << endl;
    do
    {
        cout << "Enter Number: " << endl;
        cin >> flag;
        switch (flag)
        {
        case 1:
            cout << "Enter value to Add:" << endl;
            cin >> value;
            push(value);
            break;

        case 2:
            pop();
            break;

        case 3:
            showArray();
            break;

        case 4:
            cout << "Exit" << endl;
            break;

        default:
            cout << "Plz Enter a Number in (1,2,3,4)" << endl;
            break;
        }
    } while (flag != 4);

    return 0;
}
