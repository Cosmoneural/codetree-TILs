#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c, min;
    scanf("%d %d %d",&a,&b,&c);;;;;;;;;;;;;;;;;;;;;;;;;;;
    if(a<=b) {
        min=a;
    } else {
        min=b;};
    
    if (c<=min) {
        min=c;
    }else {
        min=min;
    }
    if(a==min){
        printf("%d",1);
    }else{
        printf("%d",0);
    }if(a==b==c){
        printf(" %d",1);
    }else{
        printf(" %d",0);
    }
    return 0;
}