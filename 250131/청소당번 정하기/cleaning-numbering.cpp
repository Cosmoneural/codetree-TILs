#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a;
    cin>>a;
    int gho=0,bock=0,hwa=0;
    for(int i=0;i<=a;i++){
        if(i==0){

        }else if(i%12==0){
            hwa++;
        }else if(i%3==0){
            bock++;
        }else if(i%2==0){
            gho++;
        }
    }cout<<gho<<" "<<bock<<" "<<hwa;
    return 0;
}