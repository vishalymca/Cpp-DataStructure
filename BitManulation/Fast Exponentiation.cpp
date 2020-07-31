#include<iostream>
using namespace std;

/*
input-
3,5
output-
243
*/

main()
{
    int a,n;
    cin>>a>>n;

    int ans=1;
    while(n>0)
    {
        if(n&1)
            ans=ans*a;
        a=a*a;
        n=n>>1;
    }
    cout<<ans;
}
