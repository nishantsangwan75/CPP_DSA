#include<iostream>
using namespace std;
int SumArray(int n,int arr[]){
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    return sum;
}
int ProductArray(int n,int arr[]){
    int product=1;
    for(int i=0;i<n;i++){
        product*=arr[i];
    }
    return product;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"Sum of all the elements in the array is "<<SumArray(n,arr)<<endl;
    cout<<"Product of all the elements in the array is "<<ProductArray(n,arr)<<endl;
    return 0;
}