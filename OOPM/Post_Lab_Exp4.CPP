//Write a C++ program to display Fibonacci series upto 'n' terms
#include<iostream>
using namespace std;

int main()
{
    int n1=0,n2=1,n,i,next;
    cout<<"Enter Number Of Terms:";
    cin>>n;
    cout<<"Fibonacci Series:\n"<<n1<<endl<<n2<<endl;
    for (i=1;i<=n-2;i++)
    {
        next=n1+n2;
        cout<<next<<endl;
        n1=n2;
        n2=next;
    }
    return 0;
}