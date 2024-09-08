#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int p=1;
    int i=1;
    while(i<=10){
        p*=i;
        if(p>=n){
            break;
        }i++;
    }printf("%d",i);
    return 0;
}