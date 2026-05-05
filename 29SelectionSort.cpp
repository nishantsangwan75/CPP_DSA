#include<iostream>
using namespace std;
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallestElementIndex=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallestElementIndex]){
                smallestElementIndex = j;
            }
        }
        swap(arr[smallestElementIndex],arr[i]);
    }
}
int main(){
    int n = 4;
    int arr[]={2,4,1,3};
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}