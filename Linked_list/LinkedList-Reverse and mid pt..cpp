#include<iostream>
using namespace std;

class node{
public:
    int data;
    node *next;

    //Constructor
    node(int d)
    {
        data=d;
        next=NULL;
    }
};

void insertAtTail(node*&head,int data)
{
    if(head==NULL){
        head=new node(data);
        return;
    }
    node*tail=head;
    while(tail->next!=NULL)
        tail=tail->next;
    tail->next=new node(data);
    return;
}

void ReverseList(node*&head)
{
    node*c=head;  //current pointer
    node*p=NULL;  //prev pointer
    node*n;       //next pointer

    while(c!=NULL)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
    }
    head=p;

}

node* midPoint(node*head)
{
    if(head==NULL || head->next==NULL)
        return head;

    node*slow=head;
    node*fast=head->next;

    while(fast!=NULL && fast->next!= NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;

}

node* find(node*head,int k)  //find kth node from last of linked list
{
    node*slow=head;
    node*fast=head;
    for(int i=0;i<k;i++)
    {
        fast=fast->next;
    }
    while(fast!=NULL)
    {
        fast=fast->next;
        slow=slow->next;
    }
    return slow;
}

void print(node*head)
{
    //node*temp=head;
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;

}

main()
{
    node*head=NULL;
    insertAtTail(head,2);
    insertAtTail(head,9);
    insertAtTail(head,7);
    insertAtTail(head,5);
    insertAtTail(head,3);
    print(head);

    ReverseList(head);
    print(head);

    node*m=midPoint(head);
    cout<<m->data<<endl;

    node*k=find(head,2);
    cout<<k->data;
}
