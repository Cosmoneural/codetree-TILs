#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int cnt=0,cnt2=0,cnt3=0;
    int i=1;
    while(i<=n){
        if(i%12==0){
            cnt3++;
        }if(i%3==0){
            cnt2++;
        }if(i%2==0){
            cnt++;
        }
        i++;
    }printf("%d %d %d",cnt,cnt2,cnt3);
    return 0;
}