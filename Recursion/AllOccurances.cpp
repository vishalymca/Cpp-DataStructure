/*6 7
1 2 7 3 7 6
*/

#include<iostream>
using namespace std;

void printAllOccurance(int a[],int n,int key)
{
 if(n==0)
    return;
 if(a[0]==key)
    cout<<a[0]<<" ";
 printAllOccurance(a+1,n-1,key);
 return;
}

int storeOcc(int a[],int n,int out[],int j,int key)
{
    if(n==0)
        return j;  //size of output array
    if(a[0]==key)
    {
        out[j]=a[0];
        return storeOcc(a+1,n-1,out,j+1,key);
    }
   return storeOcc(a+1,n-1,out,j,key);
}

main()
{
    int n,key;
    cin>>n>>key;

    int a[100],out[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    printAllOccurance(a,n,key);
    cout<<endl;
    cout<<storeOcc(a,n,out,0,key);
}


