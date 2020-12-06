//1.To compare Two numbers
#include<iostream>
using namespace std;

int main()
{
    int n1,n2,large;
    cout<<"Enter Two Number's:";
    cin>>n1>>n2;
    if(n1==n2)
        cout<<"These Number's Are Equal.";
    else
    {
        large=n1>n2?n1:n2;
        cout<<large<<" Is Larger.";
    }
    return 0;
}