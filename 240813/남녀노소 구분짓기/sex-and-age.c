#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    if(a==0 && b>=19){
        printf("MAN");
    }else if(a==0 && 19>=b){
        printf("BOY");
    }

    if(a==1 && b>=19){
        printf("WOMAN");
    }else if(a==1 && 19>=b){
        printf("GIRL");
    }
    return 0;
}