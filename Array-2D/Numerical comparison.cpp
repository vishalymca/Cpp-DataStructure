#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int convertToInt(string a)
{
    int ans=0;
    int p=1;
    for(int i=a.length();i>=0;i--)
    {
        ans+=(a[i]-'0')*p;
        p=p*10;
    }
    return ans;
}

bool compare(string a,string b)
{
    //return convertToInt(a)<convertToInt(b);
    return a>b;
}

int main(){
    int n;
    cin>>n;
    cin.get();
    string a[10];
    for(int i=0;i<n;i++)
    getline(cin,a[i]);
    sort(a,a+n,compare);
    for(int i=0;i<n;i++)
    cout<<a[i]<<endl;
}

/*
3
548
56
9

output
9
56
548
*/
