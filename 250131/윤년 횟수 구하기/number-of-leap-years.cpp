#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int n;
    cin>>n;
    int wa=0;
    for(int i=1;i<=n;i++){
        if(i%4==0){
            if(i%100==0 && i%400!=0){
            } else {
                wa++;
            }
        }
    }cout<<wa;
    return 0;
}