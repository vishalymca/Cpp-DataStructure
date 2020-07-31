#include<iostream>
using namespace std;

int calculateBit(int n)
{
    int ans=0;
    while(n>0){
        ans=ans+(n&1);
        n=n>>1;
    }
    return ans;
}

int calculatefastBit(int n)
{
    int count=0;
    while(n>0)
    {
        n=n&(n-1);
        count++;
    }
    return count;

}

main()
{
    int n;
    cin>>n;
    cout<<calculateBit(n)<<endl;
    cout<<calculatefastBit(n)<<endl;
}
