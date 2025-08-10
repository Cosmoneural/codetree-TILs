#include <iostream>

using namespace std;

void jazzical(int a,int b){
    if(a<0){
        a=-a;
    }if(b<0){
        b=-b;
    }

    while(b!=0){
        int mango=a%b;
        a=b;
        b=mango;
    }
    cout<<a;
}

int main() {
    // Please write your code here.
    int a;
    int b;
    cin>>a>>b;
    jazzical(a,b);
    return 0;
}