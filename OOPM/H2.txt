#include<iostream>
using namespace std;
int count=1;
void Printer(int c)
{
    cout<<"I Have Been Called "<<c<<" Times"<<endl;
}
int main()
{
    int i;
    for(i=1;i<=10;i++)
        Printer(count++);
    return 0;
}