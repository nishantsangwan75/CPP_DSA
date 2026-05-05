#include<iostream>
using namespace std;
void insertionSort(int arr[],int n){
    for(int i=1;i<n;i++){ //i marks the start of the unsorted part
        int current = arr[i];
        int previous = i-1;
        while(previous>=0 && arr[previous]>current){
            arr[previous+1]=arr[previous];
            previous--;
        }
        arr[previous+1] = current;
    }
}
int main(){
    int n = 4;
    int arr[]={2,4,1,3};
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}