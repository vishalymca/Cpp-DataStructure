/*
2
3
1 2 3
3
3 2 1

output-
1 3 2
1 2 3

*/

#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int testcases;
	cin>>testcases;
	for(;testcases>0;testcases--){
		int n;
		cin>>n;
		int *arr=new int[n];
		for(int i=0;i<n;i++)
		cin>>arr[i];
		next_permutation(arr,arr+n);
		for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
		cout<<endl;

	}
	return 0;
}

/*
// Q2) Print the output

main()
{
    string a="bca";
    int count=1;

   do{
       cout<<a<<' ';
   }while(next_permutation(a.begin(),a.end()));
   cout<<a;
  }
*/
