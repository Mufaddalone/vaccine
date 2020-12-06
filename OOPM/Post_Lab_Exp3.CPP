//A cloth showroom has announced following  Discount on purchase. Find the net amount to be paid by the customer.
#include<iostream>
using namespace std;

int main() 
{
    int amt,choice,tot,discount;
    cout<<"Enter The Purchase Amount:";
    cin>>amt;
    cout<<"1.Mill Cloth\n2.Handloom Cloth\nEnter Your Choice:";
    cin>>choice;
    if(amt<=100)
    {
        switch (choice)
        {
            case 1: discount=0;
                    cout<<"Discount Unavailable\n";
                    break;
            case 2: discount=amt*0.05;
                    cout<<"Discount Received:"<<discount<<endl;
                    break;
            default: cout<<"Invalid Choice\n";
                     break;
        }
    }
    else if (amt>=101 && amt<=200)
    {   
        switch(choice)
        {
            case 1: discount=amt*0.05;
                    cout<<"Discount Received:"<<discount<<endl;
                    break;
            case 2: discount=amt*0.075;
                    cout<<"Discount Received:"<<discount<<endl;
                    break;
            default: cout<<"Invalid Choice\n";
                    break;
        }
    }
    else if (amt>=201 && amt<=300)
    {
        switch (choice)
        {
            case 1: discount=amt*0.075;
                    cout<<"Discount Received:"<<discount<<endl;
                    break;
            case 2: discount=amt*0.1;
                    cout<<"Discount Received:"<<discount<<endl;
                    break;
            default: cout<<"Invalid Choice\n";
                    break;
        }
    }
    else if (amt>300)
    {
        switch (choice)
        {
            case 1: discount=amt*0.1;
                    cout<<"Discount Received:"<<discount<<endl;
                    break;
            case 2: discount=amt*0.15;
                    cout<<"Discount Received:"<<discount<<endl;
                    break;
            default: cout<<"Invalid Choice\n";
                    break;
        }
    }
    tot=amt-discount;
    cout<<"Total Amount:"<<tot;
    return 0;
}

