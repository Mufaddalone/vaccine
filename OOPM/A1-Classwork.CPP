#include<iostream>
#include<string>
using namespace std;

class publication
{
    private:
            string title;
            float price;
    public:
            void getdata()
            {
                cout<<"Enter the Title:";
                cin>>title;
                cout<<"Enter the Price:";
                cin>>price;
            }
            void putdata()
            {
                cout<<"Title: "<<title<<"\nPrice: "<<price<<endl;
            }
};
class book : public publication
{
    private:
            int page_count;
    public:
            void getdata()
            {
                publication::getdata();
                cout<<"Enter the pages:";
                cin>>page_count;
            }
            void putdata()
            {
                publication::putdata();
                cout<<"Pages: "<<page_count;
            }
};
class tape : public publication
{
    private:
            int time;
    public:
            void getdata()
            {
                publication::getdata();
                cout<<"Enter play time:";
                cin>>time;
            }
            void putdata()
            {
                publication::putdata();
                cout<<"Play Time: "<<time;
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
