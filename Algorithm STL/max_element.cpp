#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

//max element from sting
/*
main()
{
    string a="edfgta";

    cout<<*max_element(a.begin(),a.begin()+6);
    //*maxelement[a.begin,a.end);
}
*/

//max element from aray
main()
{
    int a[6]={2,1,4,6,7,3};
    cout<<*max_element(a,a+6);
}

