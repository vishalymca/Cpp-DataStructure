#include<iostream>
using namespace std;

int main()
{
    int m,n;
    cin>>m>>n;
    int k,s;
    cin>>k>>s;
    char a[10][10];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s<k){
                cout<<"NO";
                return 0;
            }
            else if(a[i][j]=='.')
            {
                s-=2;
            }
            else if(a[i][j]=='*')
            {
                s+=5;
            }
            else
            {
                break;
            }

            if(j!=n-1)
                s-=1;
        }
    }
    cout<<s<<endl;
    cout<<"YES";

    return 0;
}
/* 4 4
5 20
. . * .
. # . .
* * . .
. # * *
*/
