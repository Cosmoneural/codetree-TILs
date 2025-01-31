#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin>>a;
    int sum=0;
    for(int i=1;i<=a;i++){
        int n;
        cin>>n;
        if(n%2==1 && n%3==0){
            sum+=n;
        }
    }cout<<sum;
    return 0;
}