#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%c %d",&a,&b);
    if(a=='A'){
        for(int i=1;i<=b;i++){
            printf("%d ",i);
        }
    }if(a=='D'){
        for(int i = 1;i >= b;i++){
            printf("%d ",i);
        }
    }
    return 0;
}