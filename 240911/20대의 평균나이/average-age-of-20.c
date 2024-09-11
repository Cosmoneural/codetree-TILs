#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt=0;
    int sum=0;
    while(1){
        scanf("%d\n",&n);
        if(19<=n && 30<=n){
            break;
        }cnt++;
        sum+=n;
    }double r=(double)sum/cnt;
    printf("%.2lf",r);
    return 0;
}