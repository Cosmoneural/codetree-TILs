#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    /*
    printf("a=%d b=%d\n", a , b);
    *///
    int a1 = 10000*b;
    int b1 = a*a; //a^2 xxxx a*a a*a*a

    //printf("%d : %d\n", a1, b1);

    int c = (a1/b1);
    
    printf("%d", c);

    
    printf("\nObesity");
    
    
    return 0;
}