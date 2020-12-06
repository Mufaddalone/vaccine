#include <iostream>
#include <string.h>
using namespace std;
struct time
{
    int hours;
int mins;
int secs;
};
void addsecs(struct time &t, struct time &r)
{
r.secs += 60 * 60 * t.hours + 60 * t.mins + t.secs;
}
void conhms(struct time &r)
{
r.hours = r.secs / (60 * 60);
r.mins = (r.secs - (60 * 60 * r.hours)) / 60;
r.secs = (r.secs - (60 * 60 * r.hours) - (60 * r.mins));
}
int main()
{
struct time t1, t2, r;
cout << "TIME 1\nEnter Number of hours: ";
cin >> t1.hours;
cout << "\nEnter Number of Mins: ";
cin >> t1.mins;
cout << "\nEnter Number of Seconds: ";
cin >> t1.secs;
cout << "\n\nTIME 2\nEnter Number of hours: ";
cin >> t2.hours;
cout << "\nEnter Number of Mins: ";
cin >> t2.mins;
cout << "\nEnter Number of Seconds: ";
cin >> t2.secs;
addsecs(t1, r);
addsecs(t2, r);
conhms(r);
cout << "\n\nThe sum is " << r.hours << ":" << r.mins << ":" << r.secs;
}