#include<iostream>
using namespace std;
vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> prefix(n,1);
        vector<int> suffix(n,1);
        int  multi=1;
        int i=1;
        while(i<n){
            multi*=nums[i-1];
            prefix[i]=multi;
            i++;
        }
        int j= n-2;
        multi = 1;
        while(j>=0){
            multi*=nums[j+1];
            suffix[j]=multi;
            j--;
        }
        vector<int> ans(n,1);
        for(int it = 0;it<n;it++){
            ans[it]=prefix[it]*suffix[it];
        }
        return ans;
    }
int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> product = productExceptSelf(nums);
    for(int it: product){
        cout<<it<<",";
    }
    return 0;
}