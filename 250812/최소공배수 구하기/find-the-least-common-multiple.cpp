#include <iostream>
using namespace std;

void mashle(int a,int b){
    int one=1;
    while(true){
        one++;
        if((a*one)%b==0){
            cout<<a*one;
            break;
        }
    }
}

int main() {
    // Please write your code here.
    int a,b;
    cin>>a>>b;
    mashle(a,b);
    return 0;
}