#include<iostream>
using namespace std;
bool IsValid(vector<int> &arr,int m,int maxAllowedPages){
    int student=1,pages=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>maxAllowedPages) return false; // veryyy imp ... if arr[i] > max allowed pages then return false
        if(pages+arr[i]<=maxAllowedPages){
            pages+=arr[i];
        }
        else{
            student++;
            pages=arr[i];
        }
    }
    if(student<=m) return true;
    else return false;
}
int AllocateBooks(vector<int> &arr,int m){
int start = 0; // minimum no. of pages that are given to a student is max element of array
    int end = 0;   // max no. of pages that can be given to a student is sum of array
    int ans;
    for(int i=0;i<arr.size();i++){
        start=max(start,arr[i]);
        end+=arr[i];
    }
    while(start<end){
        int mid = start+(end-start)/2;
        if(IsValid(arr,m,mid)){ // if it is valid we have to store it in ans and check for smaller possible ans
            ans=mid;
            end = mid; 
        }
        else{
            start = mid+1;
        }
    }
    return start;
}
int main(){
    vector<int> arr={15,17,20};
    int m = 2;
    cout<<AllocateBooks(arr,m);
    return 0;
}