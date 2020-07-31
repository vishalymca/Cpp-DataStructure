#include<iostream>
#include<algorithm>
using namespace std;

//Using lower bound

/*
bool compare(int a,int b)
{
    return a<=b;
}

main()
{
    int coins[]={1,2,5,10,20,50,100,200,2000};
    int n=sizeof(coins)/sizeof(int);
    int money=168;

    while(money>0){
    int lb=lower_bound(coins,coins+n,money,compare) - coins-1;
    cout<<coins[lb]<<",";
    money-=coins[lb];
    }
}
*/

//Using upper Bound
main()
{
    int coins[]={1,2,5,10,20,50,100,200,2000};
    int n=sizeof(coins)/sizeof(int);
    int money=100;

    while(money>0){
    int ub=upper_bound(coins,coins+n,money) - coins-1;
    cout<<coins[ub]<<",";
    money-=coins[ub];
    }
}
