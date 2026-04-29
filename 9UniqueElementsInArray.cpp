#include<iostream>
#include<algorithm>
using namespace std;
int MaxOfArray(int n,int arr[]){
    int maxx=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxx) maxx=arr[i];
    }
    return maxx;
}
void UniqueElements(int n1,int arr1[],int n2,int arr2[]){
    for(int i=0;i<n2;i++){
        arr2[i]=0;
    }
    for(int i=0;i<n1;i++){
        arr2[arr1[i]]++;
    }
}
int main(){
    int n1;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    int n2= MaxOfArray(n1,arr1) + 1;
    int arr2[n2];
    UniqueElements(n1,arr1,n2,arr2);
    for(int i=0;i<n2;i++){
       if(arr2[i]>0) cout<<i<<endl;
    }
    return 0;
}