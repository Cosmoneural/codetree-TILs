#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
        }printf("\n");
        printf("\n");
    }
    for(int k=n-1;k>=1;k--){
        for(int u=1;u<=k;u++){
            printf("*");
        }printf("\n");
        printf("\n");
    }
    return 0;
}