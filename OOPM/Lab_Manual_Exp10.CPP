#include<iostream>
#include<cstring>
using namespace std;

class Exp10
{
    private:
            char a[100];
    public:
            Exp10()
            {
                cout<<"Enter A String:";
                cin.getline(a,100);
            }
            void show() 
            {
                cout<<a<<endl;
            }
            bool operator ==(Exp10 e)
            {
                if(strcmp(a,e.a)==0)
                    return 1;
                else
                    return 0;
            }
};
int main()
{
    Exp10 e1,e2;
    if(e1==e2)
        cout<<"String Is Equal\n";
    else
             cout<<"String Are Not Equal\n";
    return 0;
}