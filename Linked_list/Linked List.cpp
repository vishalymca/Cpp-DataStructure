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

void insertAtHead(node*&head, int data)   //Call by refrence to change value of head in main
{
    //node n;
    //(*n).next=head;
    //This becomes static and destroy when the function call is over
    //below is the dynamic memory allocated

    node*n= new node(data);
    n->next=head;
    head= n;

    //as the function call is over only n will destroy as it is static
}

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

int length(node*head)
{
    int len=0;
    while(head!=NULL)
    {
        head=head->next;
        len+=1;
    }
    return len;
}

void insertAtMiddle(node*&head,int data,int p)
{
    if(head==NULL||p==0)
        insertAtHead(head,data);
    else if(p>length(head))
        insertAtTail(head,data);
    else{
        //insert in the middle
        //take p-1 jump
        int jump=1;
        node*temp=head;
        while(jump<=p-1){
            temp= temp->next;
            jump+=1;
        }
        node*n= new node(data);
        n->next=temp->next;
        temp->next=n;
    }

}
void print(node*head)      //Call by Value, value of head is not change in main fn i.e function creates copy of head
{
    //node*temp=head;
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;

}

void deleteAtHead(node*&head)
{
    if(head==NULL){
        return;
    }
    node*temp=head;
    head=head->next;
    delete temp;
    return;
}
void deleteAtTail(node*&head)
{
    node*prev=NULL;
    node*temp=head;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    delete temp;
    prev->next=NULL;
}

void deleteAtMiddle(node*&head,int p)
{
    if(head==NULL || p==1){
        deleteAtHead(head);
        return;
    }
    int jump=1;
    node*prev=NULL;
    node*temp=head;
    while(jump<=p-1)
    {
        prev=temp;
        temp=temp->next;
        jump+=1;
    }
    prev->next=temp->next;
    delete temp;
    return;
}

bool searchRecursive(node*head,int key)
{
    if(head==NULL)
        return false;

    if(head->data==key)
        return true;
    else
        return searchRecursive(head->next,key);
}

bool searchIterative(node*head,int key)
{

    while(head!=NULL){
        if(head->data==key)
            return true;
        head=head->next;
    }
    return false;
}

main()
{
    node*head = NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtTail(head,6);
    insertAtMiddle(head,2,3);
    print(head);  // 3->4->5->2->6->
    print(head);

    deleteAtHead(head);
    deleteAtTail(head);
    deleteAtMiddle(head,2);
    print(head);   //4->2->

    if(searchRecursive(head,12))
        cout<<"Element is present"<<endl;
    else
        cout<<"element not present"<<endl;

    if(searchIterative(head,4))
        cout<<"Element is present"<<endl;
    else
        cout<<"element not present"<<endl;

}
