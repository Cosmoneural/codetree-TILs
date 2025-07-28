#include <iostream>

using namespace std;

    void saffing(int a,int b){
        for(int i=0;i<a;i++){
            for(int j=0;j<b;j++){
                cout<<"1";
            }cout<<endl;
        }
    }

int main() {
    // Please write your code here.
    int n,m;
    cin>>n>>m;
    saffing(n,m);
    return 0;
}