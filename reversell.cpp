#include<bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    node *next;

};
void insert(node **head,int n)
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
void util(node *curr,node *prev,node **head)
{
    if (!curr->next)
    {
        *head=curr;
        curr->next=prev;
        return;
    }
    node *next=curr->next;
     curr->next=prev;
     util(next,curr,head);
}
void reverse(node **head)
{
    if (!head)
        return;
    util(*head, NULL, head);
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
    insert(&head,1);
    insert(&head,2);
    insert(&head,3);
    insert(&head,4);
    insert(&head,5);
    insert(&head,6);
    insert(&head,7);
    insert(&head,8);
    insert(&head,9);
    insert(&head,10);
    display(&head);
    cout<<endl;
    reverse(&head);
    display(&head);
    cout<<endl;

}
