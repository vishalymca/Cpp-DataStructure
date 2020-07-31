#include<iostream>
#include<cstring>
using namespace std;

main()
{
    char a[100];
    cin.getline(a,100);
    int l=strlen(a);


    int prev=0;
    int current=1;

    while(current<=l)
    {
        if(a[prev]==a[current]){
            current++;
        }
        else{
            prev++;
            a[prev]=a[current];
            current++;
        }
    }

    cout<<a;
}

/*input-ccooding
output-coding
*/
