#include<bits/stdc++.h>
using namespace std;

bool PalindromProblem_9(int x){
if(x<0){
    return false;
}
int res=0;
int number=x;
while(number>0){
 res= res*10+ number%10;
 number = number/10;
 
}
return x==res;
} 

int main(){
    int n;
    cin>>n;
    cout<<PalindromProblem_9(n);
}