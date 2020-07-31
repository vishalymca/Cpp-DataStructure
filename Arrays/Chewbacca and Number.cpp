//So, we should invert only digits greater then or equal to 5 as after inverting them,
// the result gives us smallest number.
//Important point to consider is, After inverting any digits their should
//not be trailing zeros that means,if their is 9 at the starting of the
// number then it must remain the same

//Method->1
#include<iostream>
using namespace std;
int main() {
    long long int num, n;
    cin >> num;
    n = num;
    long long int ans = 0;
    long long int mult = 1;
    while(n != 0){

     int rem = n % 10;

      if(rem >= 5){

        if(rem == 9 && (n/10) == 0){
         //do nothing
        }else{
          rem = 9 - rem;
        }
      }
      ans += rem * mult;
      mult *= 10;
      n /= 10;
    }
    cout << ans;
    return 0;
}

//method->2
/*main(){
  char a[50];
  cin>>a;

  //Iterate over the remaining numbers
  int i=0;
  if(a[i]=='9'){
    i++;
  }

  for(;a[i]!='\0';i++){
    int digit=a[i]-'0';  //Convert char into digit
    if(digit>=5)
        digit=9-digit;
    a[i]=digit+'0';     //Convert digit into char
  }

  cout<<a<<endl;
}
*/
