#include<iostream>
using namespace std;

main()
{
    char a[][10]={{'a','b','c','d','\0'},{'e','f','g','\0'},"hijkl"};
    for(int i=0;i<3;i++)
    cout<<a[i]<<endl;

    char b[10][100];  //it takes input from user
    int n;
    cin>>n;


    cin.get();    //It takes one character to avoid '\n' as the first input string
    for(int i=0;i<n;i++){
    cin.getline(b[i],100);
    }

    for(int i=0;i<n;i++){
        cout<<b[i]<<endl;
    }

}
