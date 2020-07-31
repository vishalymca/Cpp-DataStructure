//input-6
//1,5,2,6,3,0
//output-8

#include<iostream>
using namespace std;

int merge(long long int *a, int s, int e)
{
  int i=s;
  int mid=(s+e)/2;
  int j=mid+1;
  int k=s;
  int temp[100000];
  int count=0;   //Cross inversions

  while(i<=mid && j<=e){
      if(a[i]<=a[j]){
          temp[k++]=a[i++];

      }
      else{
          temp[k++]=a[j++];
          count+=(mid-i+1);
      }
  }
  while(i<=mid){
      temp[k++]=a[i++];
  }
  while(j<=e){
      temp[k++]=a[j++];
  }
  for(int i=s;i<=e;i++)
      a[i]=temp[i];

  return count;
}

int Inversion_count(long long int arr[], int l, int r)
{
    if (l >= r)
        return 0;

        int m = (l+r)/2;

        int x=Inversion_count(arr, l, m);
        int y=Inversion_count(arr, m+1, r);

        int z=merge(arr,l,r);
        return x+y+z;
}
/* Driver program to test above functions */

int main()
{
        int n;
        cin>>n;
        long long int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
    int count=Inversion_count(a,0,n-1);
    cout<<count<<endl;
}

