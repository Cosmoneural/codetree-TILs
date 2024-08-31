#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    int sum_val=0;
    int i=a;
    while(i<=b){
        sum_val+=i;
        i++;
    }printf("%d",sum_val);
    return 0;
}