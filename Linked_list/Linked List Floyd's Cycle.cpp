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
    head->next=new node(data);
    head=head->next;
    return;
}

bool detectionCycle(node*head)
{
    node*slow=head;
    node*fast=head;

    while(fast!=NULL && fast->next!= NULL){
        fast=fast->next->next;
        slow=slow->next;

        if(fast==slow)
            return true;
    }
    return false;

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
    node*start=head;
    insertAtTail(head,9);
    insertAtTail(head,7);

    node*temp=head;
    insertAtTail(head,5);
    insertAtTail(head,3);
    insertAtTail(head,6);

    head->next=temp;  //repetition

    //print(start);
    if(detectionCycle(start))
    {
        cout<<"cycle is present";
    }
    else
        cout<<"cycle is not present";
}

