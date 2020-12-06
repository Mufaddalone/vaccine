#include<iostream>
using namespace std;

void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"After Swapping n1="<<a<<" n2="<<b<<endl;
}
int main()
{
    int n1,n2;
    cout<<"Enter Two Numbers:";
    cin>>n1>>n2;
    cout<<"Before Swapping n1="<<n1<<" n2="<<n2<<endl;
    swap(n1,n2);
    return 0;
}