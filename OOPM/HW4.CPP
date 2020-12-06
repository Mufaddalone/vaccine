#include<iostream>
using namespace std;
struct employee
{
    int emp_id;
    float emp_compensation;
};
int main()
{
    employee e1,e2,e3;
    cout<<"Enter The Employee ID and Compensation Of Employeee1:";
    cin>>e1.emp_id>>e1.emp_compensation;
    cout<<"Enter The Employee ID and Compensation Of Employee2:";
    cin>>e2.emp_id>>e2.emp_compensation;
    cout<<"Enter The Employee ID and Compensation Of Employee3:";
    cin>>e3.emp_id>>e3.emp_compensation;
    cout<<"Employee ID\tEmployee Compensation"<<endl;
    cout<<e1.emp_id<<"\t\t"<<e1.emp_compensation<<endl<<e2.emp_id<<"\t\t"<<e2.emp_compensation<<endl<<e3.emp_id<<"\t\t"<<e3.emp_compensation;
    return 0;
}

