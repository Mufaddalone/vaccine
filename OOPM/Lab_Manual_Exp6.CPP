/*Name:Rutik Roll NO.8851 
Write a recursive function to convert decimal number to binary number*/
#include<iostream>
using namespace std;

int convert(int dec)
{
    if(dec==0)
        return 0;
    else
    {
        return (dec%2+10*convert(dec/2));
    }
}
int main()
{
    int dec,ans;
    cout<<"Enter Decimal Number:";
    cin>>dec;
    ans=convert(dec);
    cout<<"Binary Equivalent:"<<ans;
    return 0;
}