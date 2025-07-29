#include <iostream>

using namespace std;

void ssaf(int n){
    int c=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(c>9){c=1;}
            cout<<c++<<" ";
        }cout<<endl;
    }
}

int main() {
    // Please write your code here.
    int a;
    cin>>a;
    ssaf(a);
    return 0;
}