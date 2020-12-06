#include<iostream>
#include<cstring>
using namespace std;

void reverseit(char s[100],int l)
{
    char temp;
    for(int i=0;i<=l/2-1;i++)
    {
        temp=s[i];
        s[i]=s[l-i-1];
        s[l-i-1]=temp;
    }
    cout<<"Reverse String Is:"<<s;
}
int main()
{
    char s[100];
    cout<<"Enter String:";
    cin.get(s,100);
    reverseit(s,strlen(s));
    return 0;
}