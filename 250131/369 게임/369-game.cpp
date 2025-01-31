#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        if(i%3==0 || i%6==0 || i%9==0){
            cout<<"0"<<" ";
        }else if(i/10==3 || i/10==6 || i/10==9){
            cout<<"0"<<" ";
        }else if(i%10==3 || i%10==6 || i%10==9){
            cout<<"0"<<" ";
        }else{
            cout<<i<<" ";
        }
    }
    return 0;
}