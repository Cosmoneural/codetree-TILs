#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,min;
    scanf("%d %d %d",&a,&b,&c);
    if(a>=b && a<=c) {
        printf("1\n");
        if(b>=c) {
            printf("2\n");
            min = c;
        } else {
            printf("3\n");
            min = b;
        }
    } else {
        printf("4\n");
        min = a;
    }

    if(b<=c && a<=c) {
        printf("5\n");
        min = c;
    } else {
        printf("6\n");
        min = b;
    }

    printf("%d", min);
    return 0;
}