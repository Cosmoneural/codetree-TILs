#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int N;
    int x=0;
    scanf("%d",&N);
    while(1){
        if(N==1<<x){
            break;
        }x++;
    }printf("%d",x);
    return 0;
}