#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_sum=INT_MIN;
    for(int start=0;start<n;start++){
        int current_sum=0;
        for(int end=start;end<n;end++){
            current_sum+=arr[end];
            max_sum=max(current_sum,max_sum);
        }
    }
    cout<<max_sum;
    return 0;
}