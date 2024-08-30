#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        if(i%3==0 && i%2==1){
            printf("%d",i);
        }
    }
    return 0;
}