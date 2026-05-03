#include<iostream>
using namespace std;
int BinarySearch(vector<int> nums,int target,int start,int end){
        if(start>end) return -1;
        int mid=start+(end-start)/2; // we avoid mi = (start+end)/2 to prevent stack overflow if start and end are very large.
        if(target<nums[mid]){
            end = mid-1;
        }
        else if(target>nums[mid]){
            start = mid+1;
        }
        else return mid; // mid == target
        return BinarySearch(nums,target,start,end); // to return ans of funcn call to the preivioud funcn
        
}
int main(){
    vector<int> nums = {1};
    int n = nums.size();
    int target = 2;
    int start=0;
    int end=n-1;
    cout<<"index is "<<BinarySearch(nums,target,start,end);
    return 0;
}