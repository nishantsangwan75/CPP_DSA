#include<iostream>
using namespace std;
vector<int> productExceptSelf(vector<int> &nums){
    vector<int> product_arr;
    for(int i=0;i<nums.size();i++){
        int product = 1;
        for(int j=0;j<nums.size();j++){
            if(i!=j) product=product*nums[j];
        }
        product_arr.push_back(product);
    }
    return product_arr;
}
int main(){
    vector<int> nums = {1,2,3,4};
    vector<int> product = productExceptSelf(nums);
    for(int it: product){
        cout<<it<<",";
    }
    return 0;
}