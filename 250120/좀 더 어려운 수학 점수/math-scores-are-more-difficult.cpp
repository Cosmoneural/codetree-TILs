#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>b || (a==b && b>d)){
        cout<<"A";
    }else{
        cout<<"B";
    }
    return 0;
}