#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int cnt=0;
    while(1){
        scanf("%d",&n);
        if(n%2==0){
            if(cnt>=3){
                break;
            }printf("%d\n",n/2);
            cnt++;
        }
    }
    return 0;
}