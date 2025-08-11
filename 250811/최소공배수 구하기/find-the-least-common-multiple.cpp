#include <iostream>

using namespace std;

void chlthrhdqotn(int n,int m){
    int pw=0;
    while(1){
        pw++;
        if((n*pw) % m == 0){
            cout<<n*pw;
            break;
        }
    }
}

int main() {
    // Please write your code here.
    int n,m;
    cin>>n>>m;
    chlthrhdqotn(n,m);
    return 0;
}