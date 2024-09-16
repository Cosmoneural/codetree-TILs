#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int cnt=0;
    int n;
    scanf("%d",&n);
    while(1){
        if(n>=1000){
            break;
        }else if(n%2==0){
            n*=3;
            n+=1;
            cnt++;
        }else if(n%2==1){
            n*=2;
            n+=2;
            cnt++;
        }
    }printf("%d",cnt);
    return 0;
}