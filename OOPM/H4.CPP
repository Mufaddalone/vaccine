#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;
};
Distance Large(Distance d1,Distance d2)
{
    Distance d3;
    d3.feet=d1.feet>d2.feet?d1.feet:d2.feet;
    if(d3.feet==d1.feet)
        d3.inches=d1.inches;
    else
        d3.inches=d2.inches;
    return d3;
}
int main()
{
    Distance d1,d2,d3;
    cout<<"Enter Feet Of Distance1:";
    cin>>d1.feet;
    cout<<"Enter Inches Of Distance1:";
    cin>>d1.inches;
    cout<<"Enter Feet Of Distance2:";
    cin>>d2.feet;
    cout<<"Enter Inches Of Distance2:";
    cin>>d2.inches;
    d3=Large(d1,d2);
    cout<<"Largest Distance:"<<d3.feet<<"ft "<<d3.inches<<"inch";
    return 0;
}