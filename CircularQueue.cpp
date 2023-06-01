#include <iostream>
using namespace std;
int size = 3, rpos = 0, spos = 0, flag = 0, isFristSpos = true, isFristRpos = true, *queue;

void showArray()
{
    for (int i = 0; i < size; i++)
        cout << queue[i] << "\t";
    cout << endl;
}

bool qStore()
{

    int value;
    if ((rpos == 0 && spos == size - 1) || (rpos == spos + 1))
    {
        cout << "Queue is Full\n";
        return false;
    }

    cout << "Enter Value Number Of Add ::";
    cin >> value;

    if (isFristSpos)
    {
        spos = 0;
        rpos = 0;
        isFristSpos = false;
    }
    else if (spos == size - 1)
        spos = 0;
    else
        spos++;

    queue[spos++] = value;
    return true;
}

void qRetrive()
{
    if (rpos == 0 && !isFristRpos)
    {
        cout << "Queue is Empty\n";
        return;
    }

    if (spos == rpos)
    {
        spos = 0;
        rpos = 0;
        isFristRpos = true;
    }
    else if (rpos == size - 1)
        rpos = 0;
    else
        rpos++;

    isFristRpos = false;
    cout << "value deleted from queue" << endl;
}

int main()
{
    queue = new int[size];
    bool flagRes = true;
    while (true)
    {
        flag = 0;
        cout << "Do you Want Add Or Remove? (add:1,remove:0,show:2) ::";
        cin >> flag;

        if (flag == 1)
        {
            flagRes = qStore();
            if (!flagRes)
                break;
        }
        else if (flag == 0)
            qRetrive();
        else if (flag == 2)
            showArray();
        else
            cout << "PlZ Enter 1 or 2 !!\n";
    }
    showArray();
    return 0;
}