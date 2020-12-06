/*Name:Rutik Roll NO.8851
Transpose of matrix*/
#include<iostream>
using namespace std;

void accept(int x[10][10], int m, int n)
{
    int i,j;
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            cout<<"Enter Value:";
            cin>>x[i][j];
        }
    }
}

void display(int x[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            cout<<x[i][j]<<"\t";
        }
        cout<<"\n";
    }
}

void transpose(int a[10][10],int b[10][10],int m,int n)
{
    int i,j;
    for(i=0;i<=m-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            b[j][i]=a[i][j];
        }
    }
}
int main()
{
    int a[10][10],m,n,b[10][10];
    cout<<"Enter Number of Rows and Columns:";
    cin>>m>>n;
    accept(a,m,n);
    transpose(a,b,m,n);
    cout<<"Original Matrix:\n";
    display(a,m,n);
    cout<<"Transpose Matrix:\n";
    display(b,n,m);
    return 0;
}