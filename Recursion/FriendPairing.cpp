#include<iostream>
using  namespace std;

int pairing(int n)
{
    if(n==0 || n==1)
        return 1;
    int f1=1*pairing(n-1);
    int f2=(n-1)*pairing(n-2);
    return f1+f2;
}

main()
{
    int n;
    cin>>n;
    cout<<pairing(n);

}
