//Program to read two numbers and determines and prints if first is multiple of second.
#include<iostream>
using namespace std;

int main()
{
    int n1,n2;
    cout<<"Enter Two Number's:";
    cin>>n1>>n2;
    if(n1%n2==0)
        cout<<"First Is Multiple Of Second.\n";
    else
        cout<<"First Is Not Multiple Of Second.\n";
    return 0;
}