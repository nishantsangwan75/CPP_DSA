#include<iostream>
using namespace std;
bool Valid(vector<int> arr,int m,int maxAllowedTime){
    int painter = 1,time=0;
    for(int i=0;i<arr.size();i++){
        if(arr[i]>maxAllowedTime) return false;
        if(time+arr[i]<=maxAllowedTime){
            time+=arr[i];
        }
        else{
            painter++;
            time=arr[i];
        }
    }
    if(painter<=m) return true;
    else return false;
}
int timeTaken(vector <int> arr,int m){
    int start=0,end=0;
    for(int i=0;i<arr.size();i++){
        start=max(start,arr[i]);
        end+=arr[i];
    }
    while(start<end){
        int mid = start+(end-start)/2;
        if(Valid(arr,m,mid)){
            end = mid;
        }
        else{
            start = mid+1;
        }
    }
    return start;
}
int main(){
    vector<int> arr={40,30,10,20};
    int m = 2;
    cout<<timeTaken(arr,m);
    return 0;
}