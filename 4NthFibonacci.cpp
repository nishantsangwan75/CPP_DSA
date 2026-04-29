#include<iostream>
using namespace std;
int Fibonacci(int n){
    if(n==0) return 0;
    if(n==1) return 1;
    int fibo= Fibonacci(n-1)+ Fibonacci(n-2);
    return fibo;
}
int main(){
    int n =6;
    cout<<Fibonacci(n);
    return 0;
}