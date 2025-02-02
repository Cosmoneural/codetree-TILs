#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin>>a;
    int rotn=0;
    for(int i=1;i<=a;i++){
        if(i%2==0 || i%3==0||i%5==0){
            continue;
        }rotn++;
    }cout<<rotn;
    return 0;
}