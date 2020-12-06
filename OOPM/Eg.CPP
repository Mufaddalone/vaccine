#include<iostream>
using namespace std;
class Time
{
    private:
            int hr,min,sec;
    public:
    Time()
    {
        cout<<"Enter The Hr,Min,Sec:";
        cin>>hr;
        cin>>min;
        cin>>sec;
    }
    Time(int a)
    {
        hr=min=sec=a;
    }
    void show()
    {
        cout<<hr<<":"<<min<<":"<<sec<<endl;
    }
    void add(Time t1,Time t2)
    {
        sec=t1.sec+t2.sec;
        if(sec>59)
        {
            min++;
            sec-=60;
        }
        min=min+t1.min+t2.min;
        if(min>59)
        {
            hr++;
            min-=60;
        }
        hr=hr+t1.hr+t2.hr;
        if(hr>24)
        {
            hr=0;
        }
    }
};
int main()
{
    cout<<"Enter The Input For Time1:"<<endl;
    Time tt1;
    cout<<"Enter The Input For Time2:"<<endl;
    Time tt2;
    Time tt3(0);
    tt3.add(tt1,tt2);
    cout<<"Time1= ";
    tt1.show();
    cout<<"Time2= ";
    tt2.show();
    cout<<"Time3= ";
    tt3.show();
    return 0;
}
