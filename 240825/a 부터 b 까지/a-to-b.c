#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d ",a);
    for(int i=a;i<=b-2;){
        if(i%2==1){
            i*=2;
            printf("%d ",i);
        }else{
            i+=3;
            printf("%d ",i);
        }if(i>=b){
            
        }
    }
    return 0;
}