#include<iostream>
using namespace std;
struct date
{
    int month,day,year;
};
int main()
{
    date d={12,31,2001};
    cout<<"Entered Date Is:"<<d.month<<"/"<<d.day<<"/"<<d.year<<endl;
    return 0;
}