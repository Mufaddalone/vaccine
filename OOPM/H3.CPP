#include<iostream>
using namespace std;
void zeroSmaller(int *a,int *b)
{
    int small;
    small=*a<*b?*a:*b;
    if(small==*a) 
        *a=0;
    else
        *b=0;
    cout<<"Value After Passing Through Function\nValue Of A:"<<*a<<"\nValue Of B:"<<*b;
} 
int main()
{
    int n1,n2;
    cout<<"Enter Two Numbers:";
    cin>>n1>>n2;
    zeroSmaller(&n1,&n2);
    return 0;
}