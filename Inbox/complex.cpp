#include<iostream>
using namespace std;

class Complex
{
    double real,imag;

    public:

    Complex(double r = 0,double i = 0)
    {
        real = r;
        imag = i;
    }

    Complex operator+(Complex &obj)
    {
        Complex temp;
        temp.real = real + obj.real;
        temp.imag = imag + obj.imag;

        return temp;
    }

    Complex operator-(Complex &obj)
    {
        Complex temp;
        temp.real = real - obj.real;
        temp.imag = imag - obj.imag;

        return temp;
    }

    Complex operator++()
    {
        Complex temp;
        temp.real = ++real;
        temp.imag = ++imag;

        return temp;
    }

    Complex operator++(int)
    {
        Complex temp;
        temp.real = real++;
        temp.imag = imag++;

        return temp;
    }

    void dispaly()
    {
        cout<<"Complex Number : "<<real<<" + "<<imag;
    }
};

int main()
{
    Complex c1(12.3,23),c2(2,-23.4);

    Complex c3 = c1 + c2;

    cout<<"\n -> c1 + c2 = c3";
    cout<<"\nc1 : ";
    c1.dispaly();

    cout<<"\nc2 : ";
    c2.dispaly();

    cout<<"\nc3 : ";
    c3.dispaly();
    
    Complex c4 = c1 - c2;
    
    cout<<"\n -> c1 - c2 = c3";
    cout<<"\nc1 : ";
    c1.dispaly();

    cout<<"\nc2 : ";
    c2.dispaly();

    cout<<"\nc3 : ";
    c4.dispaly();
    

    cout<<"\nPre increment";

    cout<<"\n before pre increament c1 : ";
    c1.dispaly();

    Complex c5 = ++c1;
    
    cout<<"\n after pre increment c1 : ";
    c1.dispaly();

    cout<<"\nc5 : ";
    c5.dispaly();

    cout<<"\nPost increment";

    cout<<"\n before post increament c1 : ";
    c1.dispaly();

    Complex c6 = c1++;
    
    cout<<"\n after post increment c1 : ";
    c1.dispaly();

    cout<<"\nc6 : ";
    c6.dispaly();

}