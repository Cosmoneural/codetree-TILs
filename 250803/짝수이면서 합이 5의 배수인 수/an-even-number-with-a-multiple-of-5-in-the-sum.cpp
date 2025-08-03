#include <iostream>

using namespace std;

//아무노래나 틀어 아무거나 신나는 걸로
void qwerty(int a){
    int i=a/10; //십의 자리수
    int j=a%10; //일의 자리수
    if(a%2==0 && (i+j)%5==0){
        cout<<"Yes";
    } else{
        cout<<"No";
    }
}

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    qwerty(n);
    return 0;
}