#include<iostream>
using namespace std;

int main()
{
    int a[10][10];
    int m,n;
    cin>>m>>n;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int j=0;j<n;j++)
    {
        if(j&1)
        {
            for(int i=m-1;i>=0;i--)
            {
                cout<<a[i][j]<<" ";
            }
        }
        else{
            for(int i=0;i<m;i++)
            {
                cout<<a[i][j]<<" ";
            }
        }
    }

}

/*3 4
1 2 3 4 5 6 7 8 9 10 11 12

output- 1 5 9 10 6 2 3 7 11 12 8 4
*/
