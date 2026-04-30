#include<iostream>
using namespace std;
int majorityElement(vector<int>& nums) {
       int freq = 0, ans;
    for(int i=0;i<nums.size();i++){
        if(freq==0) ans=nums[i];
        if(nums[i]==ans) freq++;
        else freq--;
    }
    int count=0;
    for(int it:nums){
        if(it==ans) count++;
    }
    if(count>(nums.size())/2) return ans;
    else return -1;
    }
int main(){
    int n;
    cin>>n;
    vector<int> nums = {3,2,1,4};    
    cout<<majorityElement(nums);
    return 0;
}