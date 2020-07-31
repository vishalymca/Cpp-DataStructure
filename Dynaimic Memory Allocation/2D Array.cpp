#include<iostream>
using namespace std;

main()
{
    int **arr;
    int r,c;
    cin>>r>>c;

    //Create an array of row heads
    arr= new int*[r];

    //Create an 2d array
    for(int i=0;i<r;i++)
    {
        arr[i]= new int[c]{0};
    }

    //Print the 2D Array
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j];
        }
        cout<<endl;
    }
}
