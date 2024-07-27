#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    char a;
    double b,c;
    scanf("%c", &a);
    scanf("%lf %lf",&b,&c);
    printf("%c\n%.2lf\n%.2lf",a,b,c);
    return 0;
}