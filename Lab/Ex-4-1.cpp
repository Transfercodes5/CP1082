#include<iostream>
using namespace std;

int assign(int i,int *ptr)
{
    ptr = new int[i];
}

int main()
{
    int arr[1];

    cout<<sizeof(arr)<<endl;
    
    assign(10,arr);

    cout<<sizeof(arr)<<endl;

}