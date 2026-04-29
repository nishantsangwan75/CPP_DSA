#include<iostream>
using namespace std;
void PrimeNo(int n){
if(n==1) return;
PrimeNo(n-1);
int prime =1;
for(int i=2;i*i<=n;i++){
    if(n%i==0) prime=0;
}
if(prime==1) cout<<n<<endl;
}
int main(){
    int n=10;
    PrimeNo(n);
    return 0;
}