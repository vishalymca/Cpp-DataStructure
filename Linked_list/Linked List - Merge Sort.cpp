
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

node* mergeSort(node*head)
{
    //Base case
    if(head==NULL || head->next==NULL)
        return head;

    //Rec. case
    //1. Mid point
    node *mid= midPoint(head);
    node*a=head;
    node*b=mid->next;
    mid->next=NULL;

    //2. Recursively sort
    a=mergeSort(a);
    b=mergeSort(b);

    //Merge sort
    node*c= merge(a,b);
    return c;

}

main()
{
    node*head=NULL;
    buildList(head);
    print(head);

    head=mergeSort(head);
    print(head);
}
