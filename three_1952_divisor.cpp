#include<bits/stdc++.h>
using namespace std;
  
  bool isPrime(int n) { 
       if(n <= 1)
return false;
for(int i = 2; i <= sqrt(n); i++) {
if(n % i == 0)
return false;
}
return true;
}
bool isThree(int n) {
int num = sqrt(n);
return ((num * num == n) and isPrime(num));
}

int main(){
    int n;
    cin>>n;
    
    cout<<isThree(n)<<endl;

    // cout<<floor(sqrt(n));
}