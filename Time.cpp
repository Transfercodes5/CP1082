#include <iostream>
using namespace std;

class Time
{
    int h,m,s;

    public:

    Time (int hour=0,int minut=0, int sec=0)
    {
        h = hour;
        m = minut;
        s = sec;
    }

    Time operator+(Time &obj1)
    {
        Time temp;

        temp.h = h + obj1.h;
        temp.m = m + obj1.m;
        temp.s = s + obj1.s;

        if (temp.s > 60)
        {
            temp.m += temp.s/60;
            temp.s = temp.s % 60;
        }
        if (temp.m > 60)
        {
            temp.h += temp.m/60;
            temp.m = temp.m % 60;
        }

        return temp;
    }

    Time operator--()
    {
        Time temp;

        temp.h = h;
        temp.m = m;
        temp.s = --s;

        return temp;
    }

    Time operator--(int)
    {
        Time temp;

        temp.h = h;
        temp.m = m;
        temp.s = s--;

        return temp;
    }

    void display()
    {
        cout<<"\n"<<h<<" hours "<<m<<" minutes "<<s<<" second.";
    }
};

int main()
{
    Time t1(2,34,44),t2(3,43,33),t3;

    t3 = t1 + t2;

    t3.display();
}