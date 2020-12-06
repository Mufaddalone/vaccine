#include<iostream>
#include<cstring>
using namespace std;

class Reverse
{
    private:
            char s[100];
            char temp;
    public:
            void get()
            {
                cout<<"Enter String:";
                cin.get(s,100);
            }
            void reverseit()
            {
                int l=strlen(s);
                for(int i=0;i<l/2;i++)
                {
                    temp=s[i];
                    s[i]=s[l-i-1];
                    s[l-i-1]=temp;
                }
            }
            void display()
            {
                cout<<"Reverse String:"<<s<<endl;
            }
};
int main()
{
    Reverse r;
    r.get();
    r.reverseit();
    r.display();
    return 0;
}