#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    for(int i=n;i>=1;i--){
        for(int j=n;j>n-i;j--){
            printf("* ");
        }
        printf("\n");
    }

    for(int u=2;u<=n;u++){
        for(int x=1;x<=u;x++){
            printf("* ");
        }printf("\n");
    }
    return 0;
}