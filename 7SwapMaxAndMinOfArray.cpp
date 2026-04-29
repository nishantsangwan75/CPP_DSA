#include<iostream>
#include<algorithm>
using namespace std;
void SwapMaxAndMin(int n,int arr[]){
    int MinNum=INT_MAX;
    int minimum_index;
    int MaxNum=INT_MIN;
    int maximum_index;
    for(int i=0;i<n;i++){
        if(arr[i]>MaxNum){
            MaxNum=arr[i];
            maximum_index = i;
        }
        if(arr[i]<MinNum){
             MinNum=arr[i];
             minimum_index=i;
        }
    }
    int temp = arr[maximum_index];
    arr[maximum_index] = arr[minimum_index];
    arr[minimum_index] = temp;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    SwapMaxAndMin(n,arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
}