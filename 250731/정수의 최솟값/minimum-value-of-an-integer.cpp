#include <iostream>

using namespace std;

int saffing(int a,int b,int c){
    if(a<b && a<c){
        return a;
    }
     else if(b<a && b<c){
        return b;
    }
     else{
        return c;
     }
}

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;
    cout<<saffing(a,b,c);
    return 0;
}