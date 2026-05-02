#include<iostream>
using namespace std;
int ChangeValue(int* ptr){
    *ptr = 20;     // dereference of a ptr indicates the value at the adress which is stored in ptr
}
int main(){
int a = 1;
int* ptr = &a;    // & gives address of a to pointer ptr
ChangeValue(ptr);
cout<<a;
return 0;
}
//in this way we can pass by reference using pointers.