#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int i=1;
    while(i<=n){
        int digit=i%10;
        if(digit==3 || digit==6 || digit==9){
            printf("0 ");
        }else{
            printf("%d ",i);
        }digit/=10;
        i++;
    }
    return 0;
}