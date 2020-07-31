#include<iostream>
#include<cstring>
using namespace std;

main(){

    char a[1000];  //it takes input from user
    char largest[1000];

    int n;
    cin>>n;
    int largeLen=0;

   cin.get();    //It takes one character to avoid '\n' as the first input string
    for(int i=0;i<n;i++)
    {
    cin.getline(a,100);

    int len= strlen(a);
    if(len>largeLen)
    {
        largeLen=len;
        strcpy(largest,a);
    }
    }
    cout<<largest;
}

