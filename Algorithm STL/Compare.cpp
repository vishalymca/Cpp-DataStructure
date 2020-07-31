#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;

bool comp(string s1, string s2)
{
    if(s1.length() < s2.length())
        return 1;
    else if(s1.length() > s2.length())
        return 0;
    else return s1 < s2;
}

main()
{
    string data[6] = {"b", "a", "c", "abc", "bca", "xy"};
    sort(data,data+6, comp);
    for(int i=0;i<6;i++)
            cout <<data[i]<< " ";

}
