#include<iostream>
#include<algorithm>
using namespace std;
int intersection(int n1,int arr1[],int n2,int arr2[],int arr3[]){
    int index = 0;
    for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(arr1[i]==arr2[j]){
                arr3[index]=arr1[i];
                index++;
            }
        }
    }
    return index;
}
int main(){
    int n1,n2;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cin>>n2;
    int arr2[n2];
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    int arr3[n1+n2];
    int intersection_size=intersection(n1,arr1,n2,arr2,arr3);
    for(int i=0;i<intersection_size;i++){
        cout<<arr3[i]<<endl;
    }
    return 0;
}