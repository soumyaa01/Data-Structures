#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;

};
void insertend(node **head,int n)
{
    node *temp,*newnode;
    temp=*head;
    //Insertion at the end of Linked list
     if(*head==NULL)
    {
        temp=new node;
        temp->data=n;
        temp->next=NULL;
        *head=temp;
    }
    else
    {   temp=*head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        newnode=new node;
        newnode->data=n;
        newnode->next=NULL;
        temp->next=newnode;

    }

}
void insertfro(node **head,int n)
{   //Insertion at beginning of the linked list
    node *temp,*newnode;
    temp=*head;
     if(*head==NULL)
    {
        temp=new node;
        temp->data=n;
        temp->next=NULL;
        *head=temp;
    }
    else
    {
        newnode=new node;
        newnode->data=n;
        newnode->next=temp;
        *head=newnode;
    }

}
void deletefro(node **head)
{
    //Deletion from the beginning of the list
    if(*head==NULL)
        return;
    else
    {   node *temp=*head;
        cout<<"Deleted node : "<<temp->data<<endl;
        *head=temp->next;
        delete temp;
    }

}
void deleteend(node **head)
{
    //Deletion from the end of the list
    if(*head==NULL)
        return;
    else
    {
        node *temp=*head;
        while(temp->next->next!=NULL)
        {
            temp=temp->next;
        }
        node *del=temp->next;
        cout<<"Deleted node : "<<del->data<<endl;
        temp->next=NULL;
        delete del;

    }

}

void display(node **head)
{
    node *temp;
    temp=new node;
    int i;
    temp=*head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main()
{
     node *head=NULL;
    insertfro(&head,1);
    insertfro(&head,2);
    insertfro(&head,3);
    display(&head);
    insertend(&head,4);
    insertend(&head,5);
    insertend(&head,6);
    display(&head);
    deletefro(&head);
    display(&head);
    deleteend(&head);
     display(&head);
    cout<<endl;


}
