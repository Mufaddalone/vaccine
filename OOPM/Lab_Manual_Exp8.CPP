#include<iostream>
#include<cstring>
using namespace std;

struct student
{
    char name[100];
    int cet,phy,chem,math,total;
};

void sortingbymarks(student s[],int n)
{
    int i,j;
    student temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(s[i].total<s[j].total)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}

void display(student s[],int n)
{
    cout<<"Name"<<"\t"<<"CET"<<"\t"<<"Phy"<<"\t"<<"Chem"<<"\t"<<"Maths"<<"\t""\t"<<"Total"<<endl;
    for(int i=0; i<=n-1;i++)
        cout<<s[i].name<<"\t"<<s[i].cet<<"\t"<<s[i].phy<<"\t"<<s[i].chem<<"\t"<<s[i].math<<"\t"<<s[i].total<<endl;
}

void sortingbyname(student s[],int n)
{
    int i,j;
    student temp;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(strcmp(s[i].name,s[j].name)>0)
            {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
}
int main()
{
    int n,i;
    student s[200];
    cout<<"Enter number of students:";
    cin>>n;
    for(i=0;i<=n-1;i++)
    {
        cout<<"Enter name:";
        cin>>s[i].name;
        cout<<"Enter marks in Physics:";
        cin>>s[i].phy;
        cout<<"Enter marks in Chemistry:";
        cin>>s[i].chem;
        cout<<"Enter marks in Maths:";
        cin>>s[i].math;
        cout<<"Enter marks in CET:";
        cin>>s[i].cet;
        s[i].total=s[i].phy+s[i].chem+s[i].math;
    }
    cout<<"Merit List:"<<endl;
    sortingbymarks(s,n);
    display(s,n);
    cout<<"Sorting according to name:"<<endl;
    sortingbyname(s,n);
    display(s,n);
    return 0;
}