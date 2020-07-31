#include<iostream>
using namespace std;

int Binarystring(int n)
{
    if(n<=0)
        return 1;

    int f1=Binarystring(n-1);
    int f2=Binarystring(n-2);
    return f1+f2;
}

main()
{
    int n;
    cin>>n;
    cout<<Binarystring(n);
}
