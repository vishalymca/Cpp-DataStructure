#include<iostream>
#include<math.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--){
		int i=0,sum=0;
		int n;
		cin>>n;
		while(n>0)
		{
			int r=n%10;
			sum= sum + r*pow(2,i);
			i++;
			n=n/10;
		}
		cout<<sum<<endl;
	}
	return 0;
}

/*
4
101-5
1111-15
00110-6
111111-63
*/
