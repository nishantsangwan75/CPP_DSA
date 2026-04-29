#include <iostream>
using namespace std;
int BinaryToDec(int BiNum){
    int power=1,ans=0;
    while(BiNum>0){
        int last_digit=BiNum%10;
        ans+=last_digit*power;
        power*=2;
        BiNum/=10;
    }
    return ans;
}
int main(){
    int BiNum = 11;
    cout<<BinaryToDec(BiNum);
    return 0;
}