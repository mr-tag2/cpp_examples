#include <iostream>
using namespace std;

int main()
{
    
    //برنامه ایی بنویسد که وضعیت استخدامی یک کارمند را از ورودی گرفته مزایا و معایب نوع استخدام هر کارمند را چاپ کند
    //وضعیت استخدامی :(تمام وقت - پاره وقت - قراردادی و...)

    int Type = 0;

    cout << "All type Of Employment:" << endl
         << "1 - FullTime" << endl
         << "2 - PartTime" << endl
         << "3 - Projectily" << endl
         << "Enter Number type Of Employment =>";

    cin >> Type;

    switch (Type)
    {
    case 1:
        cout << "1 :: High salary (Advantage)" << endl
             << "2 :: Good work experience (Advantage)" << endl
             << "3 :: Long working hours (Defect)" << endl;
        break;

    case 2:
        cout << "1 :: Freedom of time (Advantage)" << endl
             << "2 :: Possibility to do other work (Advantage)" << endl
             << "3 :: Low salary (Defect)" << endl;
        break;

    case 3:
        cout << "1 :: Freedom of action (Advantage)" << endl
             << "2 :: Possibility to work at home (Advantage)" << endl
             << "3 :: Lack of fixed salary (Defect)" << endl;
        break;

    default:
            cout << "Enter the given values !!" << endl;
        break;
    }

    return 0;
}