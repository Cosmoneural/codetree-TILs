#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,n;
    scanf("%d",&a); // 입력되어질 정수의 갯수 4
    int i=1;
    int sum=0;
    while(i<=a){
        scanf("%d",&n);
        if(n%2==1 && n%3==0){
            sum+=n;
        }i++;
    }printf("%d",sum);
    return 0;
}