#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int cnt=0;
    int i=1;
    int hehe=n;
    while(i<=n){
        hehe/=i;
        cnt++;
        if(hehe<=1){
            break;
        }
        i++;
    }printf("%d",cnt);
    return 0;
}