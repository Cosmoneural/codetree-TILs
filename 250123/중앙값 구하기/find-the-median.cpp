#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;
    if((a>b && c>a) || (a>c && a<b)){
        cout<<a;
    }else if((b>a && b<c) || (b>c && b<a)){
        cout<<b;
    }else{
        cout<<c;
    }
    return 0;
}