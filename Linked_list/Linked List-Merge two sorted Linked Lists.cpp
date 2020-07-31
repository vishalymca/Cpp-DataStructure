
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

void buildList(node*&head)
{
    int data;
    cin>>data;

    while(data!=-1)
    {
        insertAtTail(head,data);
        cin>>data;
    }

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

node* merge(node*a,node*b)
{
    if(a==NULL){
        return b;
    }
    else if(b==NULL)
        return a;

    //Compare a and b for smaller elements
    node *c;
    if(a->data < b->data)
    {
        c=a;
        c->next=merge(a->next,b);
    }
    else{
        c=b;
        c->next=merge(a,b->next);
    }
    return c;
}

main()
{
    node*head=NULL;
    node*head2=NULL;
    buildList(head);
    buildList(head2);
    print(head);
    print(head2);

    head=merge(head,head2);
    print(head);
}
