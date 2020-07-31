
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

istream& operator>>(istream &is,node*&head)  //operator overloading
{
     buildList(head);
     return is;
}

ostream& operator<<(ostream &os,node*head)
{
     print(head);
     return os;
}

main()
{
    node*head=NULL;
    node*head2=NULL;
   // buildList(head);
    //print(head);

    cin>>head>>head2;            //We need cascading if we input two head i.e
    cout<<head<<head2;          //replace void with istream& and ostream& in function
}
