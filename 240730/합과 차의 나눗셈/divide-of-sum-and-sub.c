#include <stdio.h>
#include <math.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    //a=a+b; //a=13
    //b=a-b; //b=5
    //double c=(a+b/a-c);
    //printf("%f\n", c);
    double c = (double)(a+b)/(a-b);
    printf ("%.2f \n", c);
    return 0;
}