//a+b should do a+b-a.b 
#include<iostream>
using namespace std;

class Exp2
{
    private:
            int n;
    public:
            void getdata()
            {
                cout<<"Enter Value of n:";
                cin>>n;
            }
            void show()
            {
                cout<<"Value="<<n<<endl;
            }
            Exp2 operator +(Exp2 x)
            {
                Exp2 tmp;
                tmp.n=n+x.n-n*x.n;
                return tmp;
            }
};
int main()
{
    Exp2 e1,e2,e3;
    e1.getdata();
    e2.getdata();
    e3=e1+e2;
    e3.show();
    return 0;
}