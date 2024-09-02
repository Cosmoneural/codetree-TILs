#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    int sum=0;
    if(a<b){
        int i=a;
        while(i<=b){
            if(i%5==0){
                sum+=i;
            }i++;
        }
    }else{
        int i=b;
        while(i<=a){
            if(i%5==0){
                sum+=i;
            }
        }i++;
    }printf("%d",sum);
    return 0;
}