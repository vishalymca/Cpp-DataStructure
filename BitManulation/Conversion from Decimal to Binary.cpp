#include<iostream>
using namespace std;

//methid 1-Using String
/*
main()
{
   int n;
   string binary = "";
   cin>>n;
   while(n!=0)
   {
     int r=(n%2);
     n=n/2;
     char c=r+'0';
     binary=c+binary;   //binary=char+binary
   }
   cout << binary <<endl;
}
*/

//method 2-Without String

main()
{

    int n;
    cin>>n;
    long long int p=1;
    long long int ans=0;
    while(n>0)
    {
        ans+=(n&1)*p;
        p=p*10;
        n=n>>1;
    }
    cout<<ans;
}
