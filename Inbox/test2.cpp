#include <iostream>
using namespace std;

int main()
{
    char a,b[10];
    string s1,s2;
    // cin.get(a);
    // cout.put(a)<<endl;

    // cin.getline(b,10,'$');
    // cout.write(b,10)<<endl;
    // cout<<b<<endl;

    getline(cin,s1);
    cout<<"1 : "<<s1<<endl;
    
    getline(cin,s2);
    cout<<"2 : "<<s2<<endl;
    
    s2 += s1;
    
    cout<<"3 : "<<s2<<endl;

}