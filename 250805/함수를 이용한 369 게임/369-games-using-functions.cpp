#include <iostream>

using namespace std;

bool coden(int n){
    for(int i=n;i>0;i/=10){
        int saf=i%10;
        if(saf==3||saf==6||saf==9){
            return true;
        }
    }return false;
}

bool goden(int n){
    return n%3==0;
}
int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    int cnt=0;
    for(int i=a;i<=b;i++){
        if(coden(i)||goden(i)){
            cnt++;
        }
    }
    cout<<cnt;
    return 0;
}