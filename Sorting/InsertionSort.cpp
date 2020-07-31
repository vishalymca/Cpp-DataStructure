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
	for(int i=1;i<=n-1;i++){
        int d=i;
		while(d>0 && a[d-1]>a[d])
		{
			swap(a[d-1],a[d]);
            d--;
		}
	}
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
