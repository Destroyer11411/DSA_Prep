#include<bits/stdc++.h>
using  namespace std;

class node{
    public:
    int data;
    node* next;


    node(int val)
    {
        data=val;
        next=NULL;
    }
};

void insertAtEnd(node* &head,int val)
{
    node * n = new node(val);

    if(head==NULL)
    {
        head= n;
        return ;
    }

    node* temp = head;

    while(temp->next!=NULL)
    {
        temp = temp->next;
    }

    temp->next = n;




}

void insertAtTheHead(node* &head,int val)
{
    node* n =new node(val);
    n->next=head;
    head = n;
}


void display(node* head)
{
    node* temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}




int main()
{
    node* head=NULL;

    insertAtEnd(head,1);
    insertAtEnd(head,2);
    insertAtEnd(head,3);
    insertAtEnd(head,4);

    display(head);
    


}