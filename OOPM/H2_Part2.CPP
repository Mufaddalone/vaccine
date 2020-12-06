#include<iostream>
using namespace std;

void Printer()
{
    static int c=1;
    cout<<"I Have Been Called "<<c<<" Times"<<endl;
    c++;
}
int main()
{
    int i;
    for(i=1;i<=10;i++)
        Printer();
    return 0;
}