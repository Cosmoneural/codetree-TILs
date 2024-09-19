#include <stdio.h>
#include <stdbool.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);
    bool ljkoa=true;
    for(int i=1;i<=a;i++){
        if(a%i==0){
            ljkoa=false;
            break;
        }
    }if(ljkoa==true){
        printf("C");
    }else{
        printf("P");
    }
    return 0;
}