#include<iostream>
using namespace std;

bool increasingDecreasing(int n)
{
    int prev;
    cin >> prev;

    bool isValid = true;
    int flag=0;

    while (--n)
    {
        int curr;
        cin >> curr;
        if (curr == prev)
        {
            isValid = false;
            break;
        }
        else if (curr > prev)
        {
            flag=1;
        }
        else if (flag==1 && curr < prev)
        {
            isValid = false;
            break;
        }

        prev = curr;
    }

    return isValid;
}

main()
{
    int n;
    cin>>n;
    if(increasingDecreasing(n))
        cout<<"true";
    else
        cout<<"false";
}
