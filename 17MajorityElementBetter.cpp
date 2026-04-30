#include<iostream>
using namespace std;
int majorityElement(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        int count=1;
        for(int i=0;i<nums.size();i++){
            if(i<nums.size()-1 && nums[i]==nums[i+1]) count++;
            //i<n-1 condition is important for edge case as if the compiler reads i+1 and is largest possible value 
            //it'll give stackoverflow error so if i is not < n-1 the compiler will leave this statement and proceed 
            if(count>(nums.size()/2)) return nums[i];
            if(nums[i]!=nums[i+1]) count = 1;
        }
       return 0;
    }
int main(){
    int n;
    cin>>n;
    vector<int> nums = {3,2,3};    
    cout<<majorityElement(nums);
    return 0;
}