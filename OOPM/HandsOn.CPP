#include<iostream>
#include<cstring>
using namespace std;
class OPOverload1
{
    private:
        enum {size=80};
        char str[size];
    public:
        OPOverload1()
        {
            strcpy(str," ");    
        }
        OPOverload1(char c[])
        {
            strcpy(str,c);
        }
        void operator +=(OPOverload1 o)
        {
            if(strlen(str)+strlen(o.str)>size)
                cout<<"String Overflow";
            else
                strcat(str,o.str);
        }
        void display();
        {
            cout<<str;
        }
};
int main()
{
    OPOverload1 s1="Rutik";
    OPOverload1 s2="Yerunkar";
    cout<<"First String: "<<s1.display()<<endl;
    cout<<"Second String: "<<s2.display()<<endl;
    o1+=o2;
    cout<<"First String: "<<s1.display()<<endl;
    cout<<"Second String: "<<s2.display()<<endl;
    return 0;
}