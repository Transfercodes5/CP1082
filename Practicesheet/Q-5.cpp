#include<iostream>
#include<cmath>
using namespace std;

class Point {

    float x,y;

    public:

    void getvalues(float a,float b)
    {
        x=a;
        y=b;
    }

    void display()
    {
        cout<<"X : "<<x<<endl;
        cout<<"Y : "<<y<<endl;
    }

    void distance(Point p1,Point p2)
    {
        float dist;

        dist = sqrt(pow(p2.x - p1.x,2) + pow(p2.y - p1.y,2));

        cout<<"Distance : "<<dist<<endl;
    }
};

int main()
{
    Point P,Q;

    P.getvalues(3,4);
    Q.getvalues(4,5);

    P.distance(P,Q);
}