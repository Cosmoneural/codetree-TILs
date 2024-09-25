#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=0;j<i;j++){
            printf("*");
        }printf("\n\n");
    }
    for(int k=n-2;k>=0;k--){
        for(int u=0;u<=k;u++){
            printf("*");
        }printf("\n\n");
    }
    return 0;
}