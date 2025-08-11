#include <iostream>

using namespace std;

int dndododdooododdodod(int a,int b){
    int yee=a;
    for(int i=a;i<=b+1;i++){
        yee=yee*a;
    }return yee;
}

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    cout<<dndododdooododdodod(a,b);
    return 0;
}