#include <iostream>
using namespace std;
int DecToBinary(int DecNum){
    int power=1,ans=0;
    while(DecNum>0){
        int remainder=DecNum%2;
        DecNum/=2;
        ans+=(remainder*power);
        power*=10;
    }
    return ans;
}
int main(){
    int DecNum = 3;
    cout<<DecToBinary(DecNum);
    return 0;
}