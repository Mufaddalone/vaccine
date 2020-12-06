#include<iostream>
using namespace std;

class Negate
{
    private:
            int x, y;
    public:
            void get()
            {
                cout<<"Enter numbers:";
                cin>>x>>y;
            }
            void display()
            {
                cout<<x<<" "<<y;
            }
            void operator-()
            {
                x=-x;
                y=-y;
            }
};
int main()
{
    Negate n;
    n.get();
    cout<<"Numbers are :";
    n.display();
    -n;    
    cout<<"\nNegated numbers are :";
    n.display();
    return 0;
}