#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int i=1;
    int sum=0;
    while(i<=n){
        if(i%2==1 && i%3==0){
            sum=sum+1;
        }i++;
    }printf("%d",sum);
    return 0;
}