#include<iostream>
using namespace std;

int main()
{
    int a[10][10];
    int m,n;
    cin>>m>>n;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }


    int i=0,j=n-1;
    int key,flag=0;
    cin>>key;        //element to be searched
    while(i<m && j>=0)
    {
        if(a[i][j]==key){
            cout<<"i->>"<<i<<" j->>"<<j;
            flag=1;
            break;
        }
        else if(a[i][j]<key)
            i++;
        else
            j--;
    }
    if(flag==0)
        cout<<"Element not found";

}

/*
4 4
1 2 3 4 5 8 10 11 12 14 15 18 16 17 20 22
14
*/
