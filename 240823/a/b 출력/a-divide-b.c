#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요를레이히
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d.",a/b);

    int r = a%b;
    for(int i=0;i<20;i++){
        r = r*10; //r+=10;
        printf("%d", r/b);
        r = r%b;
    }
    return 0;
}