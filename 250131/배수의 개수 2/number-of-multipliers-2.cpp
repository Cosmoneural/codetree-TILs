#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int cntttt=0;
    for(int i=1;i<=10;i++){
        int n;
        cin>>n;
        if(n%2==1){
            cntttt++;
        }
    }cout<<cntttt;
    return 0;
}