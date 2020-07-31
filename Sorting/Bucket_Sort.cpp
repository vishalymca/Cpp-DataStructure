#include <bits/stdc++.h>
#include <iostream>
using namespace std;

class student{
    public:
    int marks;
    string name;
};

void bucket_sort(student *s,int n)
{
    vector<student> v[101];

    for(int i=0;i<n;i++)
    {
        int m=s[i].marks;
        v[m].push_back(s[i]);
    }

    for(int i=100;i>=0;i--)
    {
        for(auto it=v[i].begin();it!=v[i].end();it++)
        {
            cout<<it->marks<<" "<<it->name<<endl;
        }
    }
}

int main()
{
    int n;
    cin>>n;

    student s[1000];

    for(int i=0;i<n;i++)
    {
        cin>>s[i].marks>>s[i].name;
    }

    bucket_sort(s,n);
}
/*
5
10 A
40 B
10 C
43 D
60 R

60 R
43 D
40 B
10 A
10 C
*/
