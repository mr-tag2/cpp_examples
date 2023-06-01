#include <iostream>
using namespace std;

int main()
{

    //برنامه ایی بنوسید که میانگین نمرات تعداد نامشخص از دانشجویان را حساب نماید
    // تا زمانی که کاربر عدد منهی یک را وارد نکند برنامه بایستی به گرفتن نمرات دانشجوییان ادامه دهد
    int count = 0, score = 0, sumScore = 0, avrage = 0;

    cout << "<< Hi >>" << endl
         << endl;

    while (true) //  for(;;)
    {
        cout << "Please Enter Your Score (" << count + 1 << ") :: ";
        cin >> score;

        if (score == -1)
            break;

        sumScore += score;//sumScore =sumScore + score
        ++count; //count=count + 1 - count += 1
    }
    avrage = sumScore / count;
    cout << endl
         << "<< Goodbye >>" << endl
         << "Your Avrage Scores ::" << avrage << endl;

    return 0;
}