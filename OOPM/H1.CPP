#include<iostream>
using namespace std;
long hms_to_secs(int h,int m,int s)
{
    long int ss=h*3600+m*60+s;
    return ss;
}
int main()
{
    int hr,min,sec,n,i;
    cout<<"Time In 12 HOUR FORMAT "<<endl;
    cout<<"Number Of Times You Want Perform The Conversion:";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"\nEnter Time In HOUR:";
        cin>>hr;
        if(hr>12) 
        {
            cout<<"Invalid Input"<<endl;
            cout<<"Enter Time In HOUR:";
            cin>>hr;
        }
        cout<<"Enter Time In MIN:";
        cin>>min;
        if(min>60) 
        {
            cout<<"Invalid Input"<<endl;
            cout<<"Enter Time In MIN:";
            cin>>min;
        }
        cout<<"Enter Time In SEC:";
        cin>>sec;
        if(sec>60) 
        {
            cout<<"Invalid Input"<<endl;
            cout<<"Enter Time In SEC:";
            cin>>sec;
        }
    cout<<"Entered Time Is: "<<hr<<":"<<min<<":"<<sec<<endl;
    long int ss=hms_to_secs(hr,min,sec);
    cout<<"Entered Time In Seconds="<<ss;
    }
    return 0;
}
