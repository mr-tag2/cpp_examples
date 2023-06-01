#include <iostream>
using namespace std;
unsigned int size = 3;
int *queue;
unsigned int spos = 0, rpos = 0, flag = 0, flagRes = 0;

void showArray()
{

    for (int i = 0; i < size; i++)
        cout << queue[i] << "\t";
    cout << endl;
}

int qStore()
{
    if (spos == size)
        return 0;

    int value;
    cout << "Enter Value Number Of Add (!0)::";
    cin >> value;
    queue[spos] = value;
    spos++;
    return value;
}

int qRetrive()
{
    if (spos == rpos)
        return 0;
    int temp;
    temp = queue[rpos];
    queue[rpos] = 0;
    rpos++;
    return temp;
}

int main()
{
    queue = new int[size];
    while (true)
    {
        flag = 0;
        flagRes = 0;

        cout << "Do you Want Add Or Remove? (add:1,remove:0) ::";
        cin >> flag;
        if (flag == 1)
        {
            flagRes = qStore();
            if (flagRes == 0)
            {
                cout << "Queue is Full\n";
                break;
            }
            else
                cout << "value Added " << flagRes << endl;
        }
        else
        {
            flagRes = qRetrive();
            if (flagRes == 0)
                cout << "Queue is Empty\n";
            else
                cout << "value Removed " << flagRes << endl;
        }
    }
    showArray();
    return 0;
}