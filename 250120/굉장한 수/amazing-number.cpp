#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int A;
    cin>>A;
    if((A%2==1 && A%3==0) || (A%2==0 && A%5==0)){
        cout<<"true";
    }else{
        cout<<"false";
    }
    return 0;
}