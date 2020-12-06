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

void swap(float a,float b)
{
    float temp1;
    temp1=a;
    a=b;
    b=temp1;
    cout<<"After Swapping n3="<<a<<" n4="<<b<<endl;
}

int main()
{
    int n1,n2;
    float n3,n4;
    cout<<"Enter n1 and n2:";
    cin>>n1>>n2;
    cout<<"Enter n3 and n4:";
    cin>>n3>>n4;
    cout<<"Before Swapping n1="<<n1<<" n2="<<n2<<endl;
    cout<<"Before Swapping n3="<<n3<<" n4="<<n4<<endl;
    swap(n1,n2);
    swap(n3,n4);
    return 0;
}