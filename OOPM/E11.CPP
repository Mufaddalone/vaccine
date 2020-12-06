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
        cout<<"enter title"<<endl;
        cin>>title;
        cout<<"enter price"<<endl;
        cin>>price;
    }
    void putdata()
    {
        cout<<"Title:"<<title<<endl<<"Price:"<<price<<endl;
       
    }
    
};
class book:public publication
{
    private:
    int pagecnt;
    public:
    void getdata()
    {
        publication::getdata();
        cout<<"Pagecount:"<<endl;
        cin>>pagecnt;
    }
    void putdata()
    {
        publication::putdata();
        cout<<"Pagecount:"<<pagecnt<<endl;
    }
};
class tape:public publication
{
    private:
    float ptime;
    public:
    void getdata()
    {
        publication::getdata();
        cout<<"Enter playtime:"<<endl;
        cin>>ptime;
    }
    void putdata()
    {
        publication::putdata();
        cout<<"Play time:"<<ptime<<endl;
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
}