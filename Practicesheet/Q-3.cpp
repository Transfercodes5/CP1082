#include<iostream>
using namespace std;

class A;
class X {
    int x;

    public:
    void get_x(int i)
    {
        x=i;
    }

    friend void product (X,A);
};

class A {
    int y;
    
    public:
    void get_y(int i)
    {
        y=i;
    }

    friend void product (X,A);
};

void product (X o1,A o2)
{
    cout<<"product of x and y : "<<o1.x+o2.y<<endl;
}

int main()
{
    X obj1;
    A obj2;

    obj1.get_x(32);
    obj2.get_y(32);

    product(obj1,obj2);

}