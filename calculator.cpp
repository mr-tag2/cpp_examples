#include <iostream>
using namespace std;
int stack[10], size = 10, top = -1;

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
    stack[top--] = 0;
}

void display()
{
    for (int i = 0; i < size; i++)
        cout << stack[i] << "\t";
    cout << endl;
}

void func(int type)
{
    if (top <= 0)
    {
        cout << "First Add 2 Number" << endl;
        return;
    }
    int noF = stack[top - 1], noS = stack[top];
    int res = 0;

    if (type == 1)
        res = noF + noS;
    if (type == 2)
        res = noF * noS;
    if (type == 3)
        res = noF / noS;
    if (type == 4)
        res = noF - noS;

    pop();
    pop();
    push(res);
}

int main()
{
    char flag;
    int value;
    cout << "1) Add" << endl
         << "+) +" << endl
         << "-) -" << endl
         << "*) x" << endl
         << "/) /" << endl
         << ".) Show" << endl
         << "@) Exit" << endl;
    do
    {
        cout << "Enter: " << endl;
        cin >> flag;
        switch (flag)
        {
        case '1':
            cout << "Enter value to Add:" << endl;
            cin >> value;
            push(value);
            break;

        case '+':
            func(1);
            break;

        case '*':
            func(2);
            break;

        case '/':
            func(3);
            break;

        case '-':
            func(4);
            break;
        case '.':
            display();
            break;

        case '@':
            cout << "Exit" << endl;
            break;

        default:
            cout << "Plz Enter a Number in Up Number" << endl;
            break;
        }
    } while (flag != '@');

    return 0;
}
