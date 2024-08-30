#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n=3;
    int i=1;
    int cnt=0;
    while(i<=n){
        scanf("%d",&n);
        if(n%2==0){
            cnt=cnt+1;
        }i++;
    }printf("%d",cnt);
    return 0;
}