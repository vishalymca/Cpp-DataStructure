#include<iostream>
#include<algorithm>
using namespace std;

int RotateImageAntiClockwise(int a[10][100],int n)
{
    //Reverse the array

     for(int i=0;i<n;i++){
        reverse(a[i],a[i]+n);  //a[i]-> ith index of row
     }

    //Transpose the array
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }

    //Print matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

}

int RotateImageClockwise(int a[10][100],int n)
{
     //Transpose the array
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(a[i][j],a[j][i]);
        }
    }

    //Reverse the array
    for(int row=0;row<n;row++)
    {
        int i=0,j=n-1;      //start_col and end_column
        while(i<j)
        {
            swap(a[row][i],a[row][j]);
            i++;
            j--;
        }
    }

    //Print matrix
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}

main()
{
    int a[10][100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }
    RotateImageClockwise(a,n);  //call by reference
    cout<<endl;
    RotateImageAntiClockwise(a,n);
}
