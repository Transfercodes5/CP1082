#include<iostream>
using namespace std;

class Distance {

    private:
    float feet,inches;

    public:
    Distance(float f,float i)
    {
        feet = f;
        inches = i;
    }

    void add(Distance d1,Distance d2)
    {
        float t_feet = d1.feet + d2.feet;
        float t_inches = d1.inches + d2.inches;

        if(t_inches/12 > 1)
        {
            t_feet = t_feet + int(t_inches/12);
            t_inches = int(t_inches)%12;
        }

        cout<<"Total feet : "<<t_feet<<endl;
        cout<<"Total inches : "<<t_inches<<endl; 
    }

};

int main()
{
    Distance d1(1,12),d2(3,5);

    d1.add(d1,d2);

}