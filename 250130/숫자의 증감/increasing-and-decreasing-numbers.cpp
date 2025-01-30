#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    char b;
    int a;
    cin>>b>>a;
    if(b=='A'){
        for(int i=1;i<=a;i++){
            cout<<i<<" ";
        }
    }else{
        for(int i=a;i>=1;i--){
            cout<<i<<" ";
        }
    }
    return 0;
}