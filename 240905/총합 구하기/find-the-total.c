#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=0;
    int i=a;
    while(i<=b){
        if(i%6==0 && i%8!=0){
            sum+=i;
        }i++;
    }printf("%d",sum);
    return 0;
}