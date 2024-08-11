#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,min;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && b<c) {
    min = b;}
    else if(c<a && c<b) {
    min = c;
     }
    printf("%d", min);
    return 0;
}