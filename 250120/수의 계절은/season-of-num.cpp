#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int ho;
    cin>>ho;
    if(ho>=3 && ho<=5){
        cout<<"Spring";
    }else if(ho>=6 && ho<=8){
        cout<<"Summer";
    }else if(ho>=9 && ho<=11){
        cout<<"Fall";
    }else{
        cout<<"Winter";
    }
    return 0;
}