#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int cnt=0;
    while(1){
        if(n==1){
            break;
        }
        
        if(n%2==0){
            n/=2;
            cnt++;
        }
        
else
//kjgjkh

        if(n%2==1){
            n*=3;
            n++;
            cnt++;
        }
    }printf("%d",cnt);
    return 0;
}