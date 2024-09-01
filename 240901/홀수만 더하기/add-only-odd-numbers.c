#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n,a;
    scanf("%d",&a);
    int i=1;
    int sum=0;
    while(i<=a){
        scanf("%d",&n);
        if(i%2==1 && i%3==0){
            sum=sum+1;
        }i++;
    }printf("%d",sum);
    return 0;
}