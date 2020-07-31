#include<iostream>
#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,i,m=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
    cin>>a[i];
    }

    m=*max_element(a,a+n);  //to find max element in array

   int freq[m+1]={0}; //should be written m+1 for m size of array(takes 2 hrs to find this error)

    for(i=0;i<n;i++)
         freq[a[i]]+=1;

    for(i=0;i<=m;i++)  //max value of input in array a is m
    {
        while(freq[i]>0)
        {
         cout<<i<<" ";
          freq[i]--;
        }
    }
}
