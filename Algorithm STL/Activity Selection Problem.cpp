/*
Editorial

A basic activity selection problem which uses Greedy approach. The implementation mentioned here
states to sort the activities in the increasing order of their finishing times.
Initially, we choose the first activity. Now, starting from second activity,
current activity can be selected if the finish time of previous selected activity is
less than or equal to the starting time of current activity.

1
3
10 20
12 15
20 30

output-2
(person only do 0th and 2nd activity)
*/

#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    return a.second < b.second;
}

int main(int argc, char const *argv[])
{
    int t;
    cin>>t;
    while(t--) {
        int n, a, b;
        cin>>n;
        pair<int, int> arr[n];
        for(int i=0;i<n;i++) {
            cin>>a>>b;
            arr[i] = make_pair(a, b);
        }
        sort(arr, arr+n, cmp);
        // for(int i=0;i<n;i++) {
        //  cout<<arr[i].first<<" "<<arr[i].second<<endl;
        // }
        int ans = 1, chosen = 0;
        for(int i=1;i<n;i++) {
            if(arr[i].first>=arr[chosen].second) {
                ans++;
                chosen = i;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}


