#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        int digit=i%10;
        if((digit==3 || digit==6 || digit==9)|| digit%3==0){
            printf("0 ");
        }else if(i/10==3 || i/10==6 || i/10==9){
            printf("0 ");
        }else{
            printf("%d ",i);
        }
    }
    return 0;
}