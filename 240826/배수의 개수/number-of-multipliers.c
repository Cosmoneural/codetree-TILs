#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,cnt,cnt2;
    cnt=0;
    cnt2=0;
    for(int i=1;i<=10;i++){
        scanf("%d",&a);
        if(a%3==0){
            cnt++;
        }if(a%5==0){
            cnt2++;
        }
    }
    printf("%d %d",cnt,cnt2);
    
    return 0;
}