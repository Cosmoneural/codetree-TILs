#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n=10;
    int a;
    int cnt=0;
    int sum=0;
    int i=1;
    while(i<=n){
        scanf("%d",&a);
        if(a>=0  && a<=200){
            sum+=a;
            cnt++;
        }i++;
    }printf("%d %.1lf",sum,(double)sum / cnt);
    return 0;
}