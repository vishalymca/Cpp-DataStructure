//Piegon hole principle
#include<iostream>
using namespace std;

main()
{
    int n=4;

    int a[100005]={1,3,5,7};

    int pre[100005]={0};
    int sum=0;
    pre[0]=1;         //always store atleast 1 frequency at 0th index

    for(int i=0;i<n;i++)
    {
        sum+=a[i];
        int idx=(sum+n)%n;      //to avoid -ve numbers
        pre[idx]++;
    }

    int ans=0;
    for(int i=0;i<n;i++)
    {
           int no=pre[i];
            ans+=(no*(no-1))/2;
    }
    cout<<ans<<endl;  //4 ans
}
