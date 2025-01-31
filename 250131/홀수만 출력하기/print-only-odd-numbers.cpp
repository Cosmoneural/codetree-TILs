#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin>>a;
    for(int i=1;i<=a;i++){
        int n;
        cin>>n;
        if(n%2==1 && n%3==0){
            cout<<n<<endl;
        }
    }
    return 0;
}