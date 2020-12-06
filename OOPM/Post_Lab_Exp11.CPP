#include<iostream>
#include<string>
using namespace std;

class person
{
    private:
    string name;
    int code;
    public:
    void getdata()
    {
        cout<<"enter name"<<endl;
        cin >>name;
        cout<<"enter code"<<endl;
        cin>>code;
    }
    void putdata()
    {
        cout<<"Name:"<<name<<endl<<"Code:"<<code<<endl;
    }
};
class account:public person
{
    private:
    int pay;
    public:
    void getdata()
    {
        person::getdata();
        cout<<"Payment:"<<endl;
        cin>>pay;
    }
    void putdata()
    {
        person::putdata();
        cout<<"Payment:"<<pay<<endl;
    }
};
class admin:public person
{
    private:
    string experience;
        public:
    void getdata()
    {
         
        cout<<"Experience:"<<endl;
        cin>>experience;
    }
    void putdata()
    {
       
        cout<<"Experience:"<<experience<<endl;
    }
};
class master : public account, public admin
{
    
    public:
        void getdata()
        {
            account::getdata();
            admin::getdata();
           
        }
        void putdata()
        { 
            account::putdata();
            admin::putdata();
        }
};

int main()
{
   
    master m;
    m.getdata();
    m.putdata();
}