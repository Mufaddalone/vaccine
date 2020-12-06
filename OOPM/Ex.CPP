/* Write a program that calculates how much money you’ll end up with if you invest an amount of money at a fixed interest rate, compounded 
yearly. Have the user furnish the initial amount, the number of years, and the yearly interest rate in percent.*/
#include<iostream>
using namespace std;

int main()
{
    int amt,yr,i;
    float roi,tot;
    cout<<"Enter The Initial Amount:";
    cin>>amt;
    cout<<"Enter number of years:";
    cin>>yr;
    cout<<"Enter interest rate (percent per year):";
    cin>>roi;
    roi=roi/100;
    for(i=0;i<yr;i++)
    {
        tot=tot*(1+roi);
    }
    tot=amt*tot;
    cout<<"At the end of "<<yr<<" years, you will have "<<tot<<" dollars.";
    return 0;
}