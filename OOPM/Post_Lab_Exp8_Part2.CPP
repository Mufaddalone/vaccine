#include <iostream>
using namespace std;

struct time
{
    int hours,mins,secs;
};
void addsecs(struct time &t, struct time &s)
{
    s.secs+= 60 * 60 * t.hours + 60 * t.mins + t.secs;
}

void convert(struct time &s)
{
    s.hours = s.secs / (60 * 60);
    s.mins = (s.secs - (60 * 60 * s.hours)) / 60;
    s.secs = (s.secs - (60 * 60 * s.hours) - (60 * s.mins));
}

int main()
{
    struct time t1,t2,s;
    cout << "TIME 1\nEnter Number of Hours: ";
    cin >> t1.hours;
    cout << "Enter Number of Mins: ";
    cin >> t1.mins;
    cout << "Enter Number of Seconds: ";  
    cin >> t1.secs;
    cout << "TIME 2\nEnter Number of Hours: ";
    cin >> t2.hours;
    cout << "Enter Number of Mins: ";
    cin >> t2.mins;
    cout << "Enter Number of Seconds: ";
    cin >> t2.secs;
    addsecs(t1,s);
    addsecs(t2,s);
    convert(s);
    cout << "Sum:" << s.hours << ":" << s.mins << ":" << s.secs;
    return 0;
}
