#include <iostream>
using namespace std;

int main()
{
    int i, ix,
        array[4][4];

    for (i = 0; i < 4; i++)
        for (ix = 0; ix < 4; ix++)
        {
            if (i >= ix)
                array[i][ix] = 0;
            else
                array[i][ix] = 1;
        }

    for (i = 0; i < 4; i++)
    {
        cout << endl;
        for (ix = 0; ix < 4; ix++)
        {
            cout << array[i][ix]<<"  ";
        }
    }

    return 0;
}
