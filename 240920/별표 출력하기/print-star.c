#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    for(int i=1;i<n;i++){
        for(int j=n;j>n-i;j--){
            printf("* ");
        }printf("\n");
    }
    for(int k=n;k>=1;k--){
        for(int u=n;u>n-k;u--){
            printf("* ");
        }printf("\n");
    }
    return 0;
}