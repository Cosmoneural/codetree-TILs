#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int i=1;
    while(scanf("%d",&n)==1){
        if(n%3==0 && n%2==1){
            printf("%d\n",n);
        }
    }
    return 0;
}