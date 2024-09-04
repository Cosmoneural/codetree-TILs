#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);
    int sum=0;
    int i=1;
    while(i<=a/2){
        if(a%i==0){
            sum+=i;
        }i++;
    }if(sum==a){
        printf("P");
    }else{
        printf("N");
    }
    return 0;
}