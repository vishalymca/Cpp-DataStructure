//Linear time algorithm
#include<iostream>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int lo=0,mid=0,hi=n-1;
	while(mid<=hi)
	{
		if(a[mid]==1)
		mid++;
		else if(a[mid]==2){
			swap(a[mid],a[hi]);
		    hi--;
		}
		else{
			swap(a[mid],a[lo]);
			mid++,lo++;
		}
	}
	for(int i=0;i<n;i++)
	cout<<a[i]<<endl;
	return 0;
}
