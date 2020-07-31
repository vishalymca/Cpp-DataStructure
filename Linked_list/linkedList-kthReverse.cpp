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

node* ReverseList(node*head,int k)
{
    node*c=head;  //current pointer
    node*p=NULL;  //prev pointer
    node*n=NULL;       //next pointer
    int count=0;

    while(c!=NULL && count<k)
    {
        n=c->next;
        c->next=p;
        p=c;
        c=n;
        count++;
    }

    if(n!=NULL){
    head->next=ReverseList(n,k);
    }
    return p;
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
    insertAtTail(head,9);
    print(head);

    head=ReverseList(head,3);
    print(head);
}
