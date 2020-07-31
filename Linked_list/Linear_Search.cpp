#include<iostream>
using namespace std;
main()
{
    long long a[10];
    int n,i;
    cin>>n;
    for( i=0;i<10;i++)
    {
        cin>>a[i];
    }

    for( i=0;i<10;i++)
    {
        if(a[i]==n){
        cout<<"element found at index "<<i;
        break;
        }
    }
    if(i==10)
        cout<<"element not found";
}
