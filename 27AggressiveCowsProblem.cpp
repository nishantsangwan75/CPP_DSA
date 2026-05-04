#include<iostream>
using namespace std;
bool placeCows(vector<int> &stalls,int k,int minimumDistance){
    int cows=1,place=stalls[0];
    for(int i=1;i<stalls.size();i++){
        if(minimumDistance<=(stalls[i]-place)){
            cows++;
            place=stalls[i];
        }
    }
    return cows>=k;
}
int aggressiveCows(vector<int> &stalls,int k){
    sort(stalls.begin(),stalls.end());
    if(k>stalls.size()) return -1;
    int start = 1; // minimum space possible is 1
    int end = stalls[stalls.size()-1] - stalls[0];
    while(start<end){
        int mid = start+(end-start)/2;
        if(placeCows(stalls,k,mid)){
            start=mid+1; // we can do mid +1 as if we dicard the mid which was answer because then for the next mid 
                         // cow placement will fail and this will run end=mid-1 so we get back to the last mid which was the answer and return end
        }
        else{
            end=mid-1;
        }
    }
    return end; // important
}
int main(){
    vector<int> stalls={1,2,4,8,9};
    int k = 3;
    cout<<aggressiveCows(stalls,k);
    return 0;
}