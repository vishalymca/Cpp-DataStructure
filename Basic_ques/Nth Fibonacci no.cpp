#include<iostream>
using namespace std;

// 0 1 1 2 3 5 8 12 20 32..
// 0th 1st 2nd 3rd 4th 5th.....
main()
{
    long long int a=-1,b=1,c;
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    cout<<c;

}
