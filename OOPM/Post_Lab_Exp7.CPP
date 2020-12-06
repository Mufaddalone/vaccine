#include<iostream>
using namespace std;

inline int largest(int &a,int &b,int &c)
{
    int large=0;
    if(a>b)
        large=a;
    else
        large=b;
    if(c>large)
        large=c;
    return large;
}
int main()
{
    int a,b,c,ans;
    cout<<"Enter Three Numbers:";
    cin>>a>>b>>c;
    ans=largest(a,b,c);
    cout<<"Largest Is:"<<ans;
    return 0;
}
