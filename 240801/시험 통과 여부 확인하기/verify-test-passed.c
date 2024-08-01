#include <stdio.h>

int main() {
    int a;
    scanf("%d",&a);
    if(a < 80) {
        printf("%d more score", 80 - a);
        }
    else{printf("pass");}
    return 0;
}