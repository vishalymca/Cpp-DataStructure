#include<iostream>
using namespace std;

int main()
{
    //Allocation + Deallocation =Compiler
    int b[100]={0};
    cout<<sizeof(b)<<endl;
    //Here b cant be overwritten as B is a part of read only memory

    //Dynamic Allocation
    int n;
    cin>>n;
    int *a=new int[n]{0};
    cout<<sizeof(a)<<endl;
    //Here a can be overwritten as a is created inside the static memory

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";

    delete [] a;
    return 0;
}

/*
400
input-
5
output-
4
0 0 0 0 0
*/
