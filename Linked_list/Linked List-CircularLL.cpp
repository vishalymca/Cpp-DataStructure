#include<iostream>
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int d)
    {
        data=d;
        next=NULL;
    }
};

void insertAtHead(node*&head,int data)
{
    node*n=new node(data);
    node*temp=head;
    n->next=head;
    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }
    while(temp->next!=head)
    {
        temp=temp->next;
    }
    temp->next=n;
    head=n;
    return;
}

node* search(node*&head,int data)
{
     node*temp=head;

    while(temp->next!=head)
    {
        if(temp->data==data)
        return temp;
        temp=temp->next;
    }
    if(temp->data==data)
        return temp;
    else
        return NULL;
}

void deleteNode(node*&head,int data)
{
    node*del=search(head,data);
    if(del==NULL){
        cout<<"Element not present in link list";
        return;
    }
    if(del==head){
        head=del->next;
    }
    node*temp=head;
    while(temp->next!=del)
        temp=temp->next;
    temp->next=del->next;
    delete del;
}

void print(node*head)
{
    node*temp=head;

    while(temp->next!=head)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data<<"->END"<<endl;
}

main()
{
    node*head=NULL;
    insertAtHead(head,5);
    insertAtHead(head,8);
    insertAtHead(head,3);
    insertAtHead(head,9);
    print(head);

    deleteNode(head,9);
    deleteNode(head,5);
    print(head);
}





