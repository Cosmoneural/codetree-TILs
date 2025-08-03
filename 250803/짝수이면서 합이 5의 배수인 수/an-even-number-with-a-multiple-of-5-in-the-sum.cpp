#include <iostream>

using namespace std;

//아무노래나 틀어 아무거나 신나는 걸로
int qwerty(int a){
    int i=a/10;
    int j=a%10;
    if(a/2==0 && (i+j)/5==0){
        cout<<"Yes";
        return true;
    } else{
        cout<<"No";
        return false;
    }
}

int main() {
    // Please write your code here.
    int a;
    cin>>a;
    cout<<qwerty(a);
    return 0;
}