#include<bits/stdc++.h>
using namespace std;

void permu(vector<int>& nums){
    int k=0; // inflextion point 
int n= nums.size()-1;
for(int i=n;i>0;i--){
// I am using for loop to move right to left 
if(nums[i]>nums[i-1]){
    k=i;
    break;
}
}
if(k==0){
    sort(nums.begin(),nums.end());
}
else {
    int min= INT_MAX;
    // if we get inflextion point 
    int tw = nums[k-1];
    for(int j=k;j<=n;j++){
        if(nums[j]-tw>0 &&  nums[j]-tw<min){
            int temp = nums[j];
            nums[j]=nums[k-1];
            nums[k-1]= temp;
        }
    }
    sort(nums.begin()+k,nums.end());
    for(int i=0;i<=n;i++){
    cout<<nums.at(i)<<" ";
    }
}
}
int main(){
int n,a;
cin>>n;
vector<int>v;
for(int i=0;i<n;i++){
    cin>>a;
    v.push_back(a);
}
permu(v);                                                                         

}
