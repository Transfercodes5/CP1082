#include <iostream>
using namespace std;

class String
{
    private:
    char *str;

    public:

    String()
    {
        str = new char[20];
    }

    void setstr(char *ptr)
    {
        str = ptr;
    }

    void display()
    {
        cout<<"String : ";
        for (int i = 0; i < 1; i++)
        {
            cout<<*str + i;
        }
        
    }

    ~String()
    {
        delete[] str;
        cout<<"Memory freed";
    }

};

int main()
{
    String s1;
    char str1[20];

    cout<<"Enter string : ";
    cin.getline(str1,20);

    s1.setstr(str1);
    s1.display();

}