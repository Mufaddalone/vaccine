#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node * next;
};

struct node * Create_linked_list(struct node * head)
{
    int n,i;
    struct node * temp;
    printf("Enter Number Of Nodes:");
    scanf("%d",&n);
    head=(struct node *) malloc(sizeof(struct node));
    printf("Enter Data:");
    scanf("%d",&head->data);
    temp=head;
    for(i=1;i<n;i++)
    {
        temp->next=(struct node *) malloc(sizeof(struct node));
        temp=temp->next;
        printf("Enter Data:");
        scanf("%d",&temp->data);
    }
    temp->next=NULL;
    return head;
}
struct node * remove_front(struct node * head)
{
    struct node * temp;
    temp=head;
    head=head->next;
    temp->next=NULL;
    free(temp);
    return head;
}
struct node * remove_last(struct node * head)
{
    struct node * temp,* temp1;
    temp=head;
    while(temp->next!=NULL)
    {
        temp1=temp;
        temp=temp->next;
    }
    temp1->next=NULL;
    free(temp);
    return head;
}
struct node * remove_pos(struct node * head)
{
    struct node * temp, * temp1;
    int pos,i=1;
    printf("Enter The Position:");
    scanf("%d",&pos);
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
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    int choice;
    struct node *head;
    head=NULL;
    do
    {
        printf("1.Create Linked List\n2.Display Linked List\n3.Remove Front Element\n4.Remove Last Element\n5.Remove From Specified Location\n6.Exit\nEnter Your Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: head=Create_linked_list(head);
                    break;
            case 2: display(head);
                    break;
            case 3:head=remove_front(head);
                    break;
            case 4:head=remove_last(head);
                    break;
            case 5:head=remove_pos(head);
                    break;
            case 6: break;
        }
    }while(choice!=6);
    return 0;
}