#include <iostream>
using namespace std;

int main() {
    // Please write your code here.
    int a,b,c;
    char x,y,z;
    cin>>x>>a;
    cin>>y>>b;
    cin>>z>>c;
    if(a>=37 && x=='Y'){
        if((b>=37 && y=='Y') || (c>=37 && z=='Y')){
            cout<<"E";
        }else{
            cout<<"N";
        }
    }else if((b>=37 && y=='Y')&&(c>=37&&z=='Y')){
        cout<<"E";
    }else{
        cout<<"N";
    }
    return 0;
}