#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    scanf("%d",&n);
    int sum=0;
    int i=n;
    while(i<=100){
        sum+=i;
        i++;
    }printf("%d",sum);
    return 0;
}