#include<iostream>
using namespace std;


int profit(int n,int c,int *wt,int *price)
{
    //Base Case
    if(n==0 || c==0)
        return 0;

    //Rec case
    int ans=0;
    int include,exclude;
    include=exclude=INT_MIN;

    if(wt[n-1]<=c)
    {
        include=price[n-1] + profit(n-1,c-wt[n-1],wt,price);
    }
    exclude=profit(n-1,c,wt,price);

    ans=max(include,exclude);
    return ans;
}

main()
{
    int n=4;
    int c=7;
    int weight[]={1,2,3,5};
    int price[]={40,20,35,100};
    cout<<profit(n,c,weight,price);
    return 0;
}
