#include<iostream>
using namespace std;
int main() {
	int min,max,step;
	cin>>min;
	cin>>max;
	cin>>step;
	for(int i=min;i<=max;i+=step)
	{
		float c=0;
		c=(5.0/9.0)*(i-32);
		cout<<c;
	}
	return 0;
}
