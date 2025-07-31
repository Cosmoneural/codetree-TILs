#include <iostream>

using namespace std;

    int pitakus(int a){
        int b=0;
        for(int i=1;i<=a;i++){
            b=b+i;
        }
        return b;
    }

int main() {
   // Please write your code here.
    int n;
    cin>>n;
    int s=pitakus(n);
    cout<<s/10;
    return 0;
}