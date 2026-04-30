#include<iostream>
using namespace std;
int majorityElement(vector<int>& nums) {
       for(int it: nums){
        int count = 0;
        for(int it2: nums){
            if(it==it2) count++;
            if(count>(nums.size())/2) return it;
        }
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