#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n1 = 123;
    double n2 = 34.3423143;

    cout<<"Number 1 : "<<setw(10)<<setprecision(2)<<setfill('*')<<n1<<endl;
    cout<<"Number 2 : "<<setw(10)<<setprecision(5)<<setfill('*')<<n2<<endl;
    cout<<"Number 3 : "<<fixed<<n2<<endl;
    cout<<"Number 4 : "<<scientific<<n2<<endl;

    
    cout<<"\nEnd"<<endl;
}