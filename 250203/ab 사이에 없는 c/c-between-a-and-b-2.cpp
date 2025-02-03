#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    cin>>a>>b>>c;
    bool printf=true;
    for(int i=a;i<=b;i++){
        if(i%c==0){
            printf=false;
        }
    }if(printf==true){
        cout<<"YES";
    }if(printf==false){
        cout<<"NO";
    }
    return 0;
}