#include <iostream>

using namespace std;

void wasans(int a){
    for(int i=1;i<=a;i++){
        for(int j=1;i<=a;j++){
            cout<<j<<" ";
        }cout<<endl;
    }
}

int main() {
    int N;
    cin >> N;
    wasans(N);
    // Write your code here!

    return 0;
}