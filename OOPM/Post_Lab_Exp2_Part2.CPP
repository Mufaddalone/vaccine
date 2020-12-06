//2.To find Roots Of Equation 
#include<iostream>
using namespace std;

int main()
{
    int a,b,c,d,m,n;
    float x1,x2;
    cout<<"Enter Value Of a,b,c,d,m,n:";
    cin>>a>>b>>c>>d>>m>>n;
    if(a*d-c*d==0)
        cout<<"Enter Appropriate Value Of a,d and c\n";
    else
    {
        x1=(float)(m*d-b*n)/(a*d-c*d);
        x2=(float)(n*a-m*c)/(a*d-c*d);
        cout<<"X1="<<x1<<endl;
        cout<<"x2="<<x2<<endl;
    }
    return 0;
}