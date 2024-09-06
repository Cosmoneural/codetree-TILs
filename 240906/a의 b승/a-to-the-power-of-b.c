#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    int power = 1;
    //a 자체를 b번 곱한다.
    for(int i=1;i<=b;i++){
        power = power * a;
    }
    printf("%d", power);
/*
    int s=1;
    int i=a;
    while(i<=b){
        s*=a;
        i++;
    }printf("%d",s);
    return 0;
*/
}