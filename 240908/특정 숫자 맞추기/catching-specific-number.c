#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    while(1){
        scanf("%d\n",&n);
        if(n<25){
            printf("Higher\n");
        }if(n>25){
            printf("Lower\n");
        }if(n==25){
            printf("Good");
            break;
        }
    }
    return 0;
}