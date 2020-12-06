//Practice Problem 1
 #include<iostream>
 using namespace std;

 class employee
 {
    private:
            char name[100];
            int number;
    public:
            void getdata()
            {
                cout<<"Enter Name:";
                cin>>name;
                cout<<"Enter Employee Number:";
                cin>>number;
            }
            void show()
            {
                cout<<"Name: "<<name<<"\nEmployee Id: "<<number<<endl;
            }
 };

 class manager : public employee
 {
     private:
            char title[100];
            float dues;
    public:
            void getdata()
            {
                employee::getdata();
                cout<<"Enter Title:";
                cin>>title;
                cout<<"Enter Dues:";
                cin>>dues;
            }
            void show()
            {
                employee::show();
                cout<<"Title: "<<title<<"\nDues: "<<dues<<endl;
            }
 };
 int main()
 {
     manager m;
     m.getdata();
     m.show();
     return 0;
 }