#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,min;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a<=c) {
        //printf("1\n");
        if(b>=c) {
            min = c;
        } else {
            min = b;
        }
    } else {
        min = a;
    }

    if(b>=c) {
        //printf("1\n");
        min = c;
    } else {
        min = b;
    }

    printf("%d", min);
    return 0;
}