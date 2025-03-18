#include<iostream>
using namespace std;

float volume(float l)
{
    return l*l*l;
}

float volume(float r,float h)
{
    return 3.14*r*r*h;
}

float volume(float l,float b,float h)
{
    return l*b*h;
}


int main()
{
    cout<<"volume of cube : "<<volume(6)<<endl;
    cout<<"volume of cylinder : "<<volume(3,6)<<endl;
    cout<<"volume of rectangular : "<<volume(2,3,4)<<endl;
}