#include<iostream>
using namespace std;

int isFull(int ms,int cs)
{
    if(ms==cs)
        return 1;
    return 0;
}

int isEmpty(int cs)
{
    if(cs==0)
    return 1;
return 0;
}

void enQueue(int *a,int *rear,int ms,int *cs,int data)
{
    if(isFull(ms,*cs)){
        cout<<"OverFlow"<<endl;
        return;
    }
    *rear=(*rear+1)%ms;
    a[*rear]=data;
    *cs+=1;
}

void deQueue(int *a,int *front,int ms,int *cs)
{
    if(isEmpty(*cs)){
        cout<<"Underflow"<<endl;
        return;
    }
    *front=(*front+1)%ms;
    *cs-=1;
}

int getFront(int*a,int *front)
{
    return a[*front];

}

main()
{
     int front=0;
     int a[10]={0};
     int ms=10;
     int cs=0;
     int rear=ms-1;

     for(int i=1;i<=10;i++){
     enQueue(a,&rear,ms,&cs,i);
     }

    while(!isEmpty(cs))
    {
        cout<<getFront(a,&front)<<endl;
        deQueue(a,&front,ms,&cs);
    }
     enQueue(a,&rear,ms,&cs,8);
     cout<<rear<<endl;
    cout<<front<<endl;
    deQueue(a,&front,ms,&cs);
    deQueue(a,&front,ms,&cs);
    cout<<front;
}
