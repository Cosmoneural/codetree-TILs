#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    int prod=1;
    int i=a;
    while(i<=b){
        prod*=i;
        i++;
    }printf("%d",prod);
    return 0;
}