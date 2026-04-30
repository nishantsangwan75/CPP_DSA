#include<iostream>
#include<vector>
using namespace std;
int singleNumber(vector<int>& nums) {
        vector<int> vec(60000,0);
        for(int it: nums){
            if(it<0) vec[60000+it]++;
            else vec[it]++;
        }
        for(int i=0;i<vec.size();i++){
            if(vec[i]==1 && i<=30000) return i;
            if(vec[i]==1 && i>30000) return (i-60000);
        }
        return 0;
}
int main(){
    vector<int> nums = {-1,-30000,-1};
    cout<<singleNumber(nums);
    return 0;
}