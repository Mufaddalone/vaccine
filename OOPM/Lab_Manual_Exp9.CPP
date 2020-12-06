#include<iostream>
#include<cstring>
using namespace std;

class Books
{
    private:
            char author[100],title[100],publisher[100];
            int price,stock;
    public:
            Books()
            {
                char *title=new char[100];
                char *author=new char[100];
                char *publisher=new char[100];
                stock=price=0;
            }
            void getdata()
            {
                cout<<"Enter Name of Title:";
                cin.get(title,100);
                cout<<"Enter Name of Author:";
                cin.get(author,100);
                cout<<"Enter Name of Publisher:";
                cin.get(publisher,100);
                cout<<"Enter the Price:";
                cin>>price;
                cout<<"Enter the Stock:";
                cin>>stock;
            }

            int search(char a[100],char t[100])
            {
                if(strcmp(author,a) && strcmp(title,t))
                    return 1;
                else
                    return 0;
            }

            void copies(int c)
            {
                if(stock>c)
                    cout<<"\nPrice of "<<c<<" copies:"<<(price * c);
                else
                    cout<<"\nNot Available";
            }

            void display()
            {
                cout<<title<<"\t"<<author<<"\t"<<publisher<<"\t"<<price<<"\t"<<stock<<endl;
            }
};

int main()
{
    int choice,x,i,k,flag,copy;
    char author[100],title[100];
    Books b[100];
    do
    {
        cout<<"1.Add a Book\n2.Search Book\n3.Display Available Books\n4.Exit\nEnter Your Choice:";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"Enter Number Of Books:";
                    cin>>x;
                    for(i=0;i<=x-1;i++)
                        b[i].getdata();
                    break;
            case 2: cout<<"Enter Title of The Book:";
                    cin.get(title,100);
                    cout<<"Enter Author of The Book:";
                    cin.get(author,100);
                    for(i=0;i<=x-1;i++)
                    {
                        if(b[i].search(author,title))
                        {
                            k=i;
                            flag=1;
                            if(flag==1)
                                cout<<"\nBook Is Available";
                            else
                            {
                                cout<<"\nBook Is Not Available";
                                break;
                            }
                        }
                    }
                    if(flag==1)
                    {
                        cout<<"\nEnter number of copies:";
                        cin>>copy;
                        b[k].copies(copy);
                    }
                    break;
            case 3: cout<<"Title\tAuthor\tPublisher\tPrice\tStock\n";
                    for(i=0;i<=x-1;i++)
                        b[i].display();
                    break;
            case 4: break;
        }
    }while(choice!=4);
}