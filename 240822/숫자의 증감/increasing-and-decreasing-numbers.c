#include <stdio.h>

int main() {
    int b;
    char a;
    scanf("%c %d",&a,&b);
    if(a=='A'){
        for(int i=1;i<=b;i++){
            printf("%d ",i);
        }
    }if(a=='D'){
        for(int b;b>=1;b--){
            printf("%d ",b);
        }
    }
    return 0;
}