#include <iostream>
#include<algorithm>
#include<ctime>
using namespace std;

int a[10000000];

void bubbleSort(int *a,int n){

    for(int i=0;i<n-1;i++){
        for(int j=0;j<=n-i-2;j++){
            if(a[j]>a[j+1]){
                swap(a[i],a[j]);
            }
        }
    }
}

int main() {

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        a[i] = n-i;
    }

    //Inbuild Sort

    time_t startTime = clock();
    //sort(a,a+n);
    bubbleSort(a,n);
    time_t endTime = clock();

    cout<<endTime - startTime <<endl;




    return 0;
}

