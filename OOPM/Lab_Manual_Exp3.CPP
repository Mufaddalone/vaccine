//Use switch statement to show elective subject
#include<iostream>
using namespace std;

int main()
{
    int year,x;
    cout<<"Enter The Number Of Year:";
    cin>>year;
    cout<<"1.IT\n2.ECS\nEnter Your Choice:";
    cin>>x;
    switch(year)
    {
        case 3: switch(x)
                {
                    case 1: cout<<"Elective Subject Name:Artificial Intelligence\n";
                            break;
                    case 2: cout<<"Elective Subject Name:Green IT\n";
                            break;
                }
                break;
        case 4: switch(x)
                {
                    case 1: cout<<"Elective Subject Name:Storage Management\n";
                            break;
                    case 2: cout<<"Elective Subject Name:Project Management\n";
                            break;
                }
                break;
        default: cout<<"Invalid Choice\n";
                break;
    }
    return 0;
}