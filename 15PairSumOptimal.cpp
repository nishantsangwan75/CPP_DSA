#include<iostream>
using namespace std;
int main(){
    //index of pairs who's sum = target in a sorted array.
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int target;
    cin>>target;
    int pair_sum=0;
    int i=0,j=n-1;
    while(i<j){ // while loop condn is important
        if((arr[i]+arr[j])<target) i++;
        else if((arr[i]+arr[j])>target) j--;
        else break; // it's important to break or the system will stuck in while loop 
    }
    cout<<i<<","<<j;
    return 0;
}