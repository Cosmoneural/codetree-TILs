#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);

    printf("a=%d b=%d\n", a , b);
    
    int a1 = 10000*b;
    int b1 = a*a;

    printf("%d : %d", a1, b1);

    double c = (double)(10000*b/(a^2));
    printf("%.2f", c);
    printf("\nObesity");
    return 0;
}