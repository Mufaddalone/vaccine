#include<iostream>
#include<cstring>
using namespace std;

class publication
{
    private:
            char title[100];
            float price;
    public:
            void getdata()
            {
                cout<<"Enter Title:";
                cin.get(title,100);
                cout<<"Enter price:";
                cin>>price;
            }
            void putdata()
            {
                cout<<"Title:"<<title<<"\nPrice:"<<price<<endl;
            }
};
class book : public publication
{
    private:
            int pgcount;
    public:
            void getdata()
            {
                publication::getdata();
                cout<<"Enter Page Count:";
                cin>>pgcount;
            }
            void putdata()
            {
                publication::putdata();
                cout<<"Page Count:"<<pgcount<<endl;
            }
};
class tape : public publication
{
    private:
            float playtime;
    public:
            void getdata()
            {
                publication::getdata();
                cout<<"Enter Playtime:";
                cin>>playtime;
            }
            void putdata()
            {
                publication::putdata();
                cout<<"Play Time:"<<playtime<<endl;
            }
};
int main()
{
    book b;
    tape t;
    b.getdata();
    b.putdata();
    t.getdata();
    t.putdata();
    return 0;
}