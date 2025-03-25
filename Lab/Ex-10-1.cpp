
#include<iostream>
#include<cstring>
using namespace std;

class String
{
    char *str;

    public:
    String(char s[] = "")
    {
        str = new char[strlen(s)+1];
        str = s;
    }

    String operator +(String &obj)
    {
        String temp;

        int lstr = strlen(str) ,lostr = strlen(obj.str);

        temp.str = new char[lstr+lostr+1];

        for(int i=0;i<lstr;i++)
        {
            temp.str[i] = str[i];
        }

        for(int i=0;i<lostr;i++)
        {
            temp.str[lstr + i] = obj.str[i];
        }

        temp.str[lstr+lostr] = '\0';
        return temp;
    }

    bool operator==(String &obj)
    {
        if(strcmp(str,obj.str) == 0)
        {
            return true;   
        }
        else 
            return false;
    }

    void display()
    {
        cout<<"String is "<<str;
    }
};

int main()
{
    String s1("taksh"),s2("kan");

    String s3 = s1 + s2;
    
    s3.display();

    if(s1 == s2)
        cout<<"\ns1 and s2 are same.";
    else
        cout<<"\ns1 and s2 are different.";
}