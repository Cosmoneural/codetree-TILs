#include <iostream>

using namespace std;

bool fiveaf(int n){
    if(n%100==0 && n%400!=0){
        return false;
    } else if(n%4==0){
        return true;
    }
    else{
        return false;
    }
}

int main() {
    // Please write your code here.
    int a;
    cin>>a;
    if(fiveaf(a)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }
    return 0;
}