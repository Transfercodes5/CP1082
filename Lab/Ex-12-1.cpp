#include<iostream>
using namespace std;

class Student
{
    protected:
    int roll;

    public:
    Student() 
    {
        cout<<"Enter roll no : ";
        cin>>roll;
    }
};

class Test : protected Student
{
    protected:
    int marks[2];

    public:

    Test(int m1,int m2)
    {
        marks[0] = m1;
        marks[1] = m2;
    }
};

class Result : protected Test 
{
    int total = marks[0];

    public:
    Result()
    {

    }
};