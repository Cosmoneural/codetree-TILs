#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int cnt=0;
    int i=1;
    while(i<=n){
        if((i%4==0 && i%100!=0) || i%400==0){
            cnt = cnt+1;
        }i++;
    }printf("%d",cnt);
    return 0;
}