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
    int current_sum=0;
    for(int i=0;i<n;i++){
        current_sum+=arr[i];
        max_sum=max(max_sum,current_sum);
        if(current_sum<0) current_sum = 0;  // this line is to be written after max_sum line because of the edge case 
                                            // that if all the numbers are -ve and this line is above it would return 0 but as
                                            // all the numbers are negative the ans must be least negative number as the largest sum of subarray
    }
    cout<<max_sum;
    return 0;
}