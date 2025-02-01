#include <iostream>

using namespace std;

void out(int a,int b){
    for(int i=1;i<=a;i++){
        for(int y=1;y<=b;y++){
            cout<<"1";
        }cout<<endl;
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    out(n,m);
    // Write your code here!

    return 0;
}