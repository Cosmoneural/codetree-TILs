#include <stdio.h>
#include <stdbool.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    bool so=false;
    for(int i=a;i<=b;i++){
        if(1920%i==0 && 2880%i==0){
            so=true;
        }
    }if(so==true){
        printf("1");
    }else{
        printf("0");
    }
    return 0;
}