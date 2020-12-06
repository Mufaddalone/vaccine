#include<iostream>
using namespace std;

int gcd(int m, int n) 
{
   if(m == n)
      return m;
   else if (m > n)
      return gcd(m-n, n);
   else
      return gcd(m, n-m);
}

int main()
{
    int a,b,ans;
    cout<<"Enter two number's:";
    cin>>a>>b;
    ans=gcd(a,b);
    cout<<"GCD:"<<ans;
    return 0;
}