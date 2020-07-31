#include<iostream>
#include<cstring>
using namespace std;
main()
{
    char a[]={'a','b','c','\0'};
    int n=strlen(a);
    int range=(1<<n);

    for(int i=0;i<range;i++)
    {
        int no=i,j=0;
        while(no>0)
        {
            (no&1)?cout<<a[j]:cout<<"";  //masking
            j++;
            no=no>>1;
        }
        cout<<endl;
    }
}

