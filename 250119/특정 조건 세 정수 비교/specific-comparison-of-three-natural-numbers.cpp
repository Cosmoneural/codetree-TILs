#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;
    if(b>=c && a==c){
        cout<<"1";
    }else if(c>=b && a==b){
        cout<<"1";
    }else if(a<=b && a<=c){
        cout<<"1";
    }
    else{
        cout<<"0";
    }
    if(a==b && c==b){
        cout<<" 1";
    }else{
        cout<<" 0";
    }
    return 0;
}