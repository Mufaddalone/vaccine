#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

struct node * add(struct node * head)
{
    int n,i;
    struct node * temp;
    cout<<"Enter Number Of Nodes:";
    cin>>n;
    head=(struct node *) malloc(sizeof(struct node));
    cout<<"Enter Data:";
    cin>>head->data;
    temp=head;
    for(i=1;i<n;i++)
    {
        temp->next=(struct node *) malloc(sizeof(struct node));
        temp=temp->next;
        cout<<"Enter Data:";
        cin>>temp->data;
    }
    temp->next=NULL;
    return head;
}
struct node * remove(struct node * head)
{
    struct node * temp, * temp1;
    int pos,i=1;
    cout<<"Enter The Position:";
    cin>>pos;
    temp=head;
    while(i<pos)
    {
        temp1=temp;
        temp=temp->next;
        i++;
    }
    temp1->next=temp->next;
    temp->next=NULL;
    free(temp);
    return head;
}
void display(struct node * head)
{
    struct node *temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<"\n";
}
int main()
{
    int choice;
    struct node *head;
    head=NULL;
    do
    {
        cout<<"1.Add\n2.Display\n3.Delete\n4.Exit\nEnter Your Choice:";
        cin>>choice;
        switch(choice)
        {
            case 1: head=add(head);
                    break;
            case 2: display(head);
                    break;
            case 3:head=remove(head);
                    break;
            case 4: break;
        }
    }while(choice!=4);
    return 0;
}