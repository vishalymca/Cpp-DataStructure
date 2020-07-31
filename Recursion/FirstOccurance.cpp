/*6 7
1 2 7 3 7 6
*/

#include<iostream>
using namespace std;

int firstOccurance(int a[],int n,int key)
{
 if(n==0)
        return -1;
 if(a[0]==key)
        return 0;
 int i=firstOccurance(a+1,n-1,key);
 if(i==-1)
    return -1;
 else
    return i+1;
}

main()
{
    int n,key;
    cin>>n>>key;

    int a[100];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<firstOccurance(a,n,key);
}
