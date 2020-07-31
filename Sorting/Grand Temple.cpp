/*
A religious king wants to build the largest temple in his kingdom . To build the largest temple he needs to find the area of the largest suitable land .
Given co-ordinates which denotes rivers flowing through the point horizontally as well as vertically , find the largest area possible to make the grand temple.
3
1 1
2 4
5 2*/

#include<iostream>
using namespace std;
#include<algorithm>
int main() {

    int n;
    cin>>n;
    long long int x[n],y[n];
    for(int i=0;i<n;i++)
    {
        cin>>x[i]>>y[i];
    }
    sort(x,x+n);
    sort(y,y+n);
    for(int i=n-1;i>0;i--)
    {
        x[i]=x[i]-x[i-1];
        y[i]=y[i]-y[i-1];
    }
    long long int max=0;
    for(int i=1;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            long long int area=(x[i]-1)*(y[j]-1);
            if(max<area)
                max=area;
        }
    }
    cout<<max<<endl;
}
