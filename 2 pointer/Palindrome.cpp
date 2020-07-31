#include<iostream>
#include<cstring>
using namespace std;

bool isPalindrome(char a[])
{
    int i=0;
    int j=strlen(a)-1;
    while(i<j){
        if(a[i]==a[j])
        {
            i++;
            j--;
        }
        else
            return false;
    }
    return true;
}

main()
{
    char a[10];
    cin.getline(a,10);
    if(isPalindrome(a))
        cout<<"Yes";
    else
        cout<<"No";
}
