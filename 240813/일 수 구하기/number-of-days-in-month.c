#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);
    if(a==1 || a==3 || a==5 || a==7 || a==8 || a==10 || a==12){
        printf("31");
    }else if(a==4 || a==6 || a==9 || a==11){
        printf("30");
    }else{
        printf("28");
    }
    return 0;
}