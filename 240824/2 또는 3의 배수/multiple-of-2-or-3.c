#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        if(i%2==0 || i%3==0){
            printf("%d ",1);
        }else{
            printf("%d ",0);
        }
    }
    return 0;
}