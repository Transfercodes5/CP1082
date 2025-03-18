#include<iostream>
using namespace std;

class EMPLOYEE {

    int e_number;
    char e_name[30];
    float basic;
    float DA;
    double netsalary = basic + DA;

    public:
    void getdata()
    {
        cout<<"-------------------------------------------------------"<<endl;
        cout<<"Enter Employee Number              : ";
        cin>>e_number;
        getchar();
        cout<<"Enter Employee Name                : ";
        cin.getline(e_name,30);
        cout<<"Enter Employee Basic salary        : ";
        cin>>basic;
        cout<<"Enter Employee Dearness allowance  : ";
        cin>>DA;
        cout<<"-------------------------------------------------------"<<endl;
    }

    void display()
    {

        cout<<"\n\nEmployee Number : "<<e_number<<endl;
        cout<<"Employee Name : "<<e_name<<endl;
        cout<<"Employee Basic salary : "<<basic<<endl;
        cout<<"Employee Dearness allowance : "<<DA<<endl;
        cout<<"Employee Net salary : "<<netsalary<<endl;
    }

};

int main()
{
    EMPLOYEE e1;

    e1.getdata();
    e1.display();

}