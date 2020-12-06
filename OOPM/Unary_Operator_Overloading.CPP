//Overloading Unary Operator To Increament Number By 10
#include<iostream>
using namespace std;

class Exp1
{
    private:
            int n;
    public:
            Exp1()
            {
                cout<<"Enter Value Of n:";
                cin>>n;
            }
            void show()
            {
                cout<<n<<endl;
            }
            void operator ++()
            {
                n=n+10;
            }
};
int main()
{
    Exp1 e1;
    e1.show();
    ++e1;
    e1.show();
    Exp1 e2;
    e2.show();
    ++e2;
    e2.show();
    return 0;
}