#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d.",a/b);
    int c=a % b;
    int i=0;
    while(i<20){
        c*=10;
        printf("%d",c/b);
        c%=b;
        i++;
    }
    return 0;
}