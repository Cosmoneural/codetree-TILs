#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(b>a && c>b){
        printf("%d",1);
    }else{
        printf("%d",0);
    }
    return 0;
}