#include<iostream>
using namespace std;
int BinarySearch(vector<int> nums,int target){
    int n = nums.size();
        int start=0;
        int end=n-1;
        int mid=(start+end)/2;
        while(start<=end){
            mid = start+(end-start)/2; // we avoid mi = (start+end)/2 to prevent stack overflow if start and end are very large.
            if(nums[mid]==target) return mid;
            else if(target<nums[mid]){
                    end = mid-1;
                }
            else{
                    start = mid+1;
                }
        }
        return -1;
}
int main(){
    vector<int> nums = {1,2};
    int target = 2;
    cout<<"index is "<<BinarySearch(nums,target);
    return 0;
}