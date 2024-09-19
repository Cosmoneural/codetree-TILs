#include <stdio.h>
#include <stdbool.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int a;
    scanf("%d",&a);
    bool ljkoa=true;
    for(int i=2;i<a;i++){
        if(a%i==0){
            ljkoa=false; //소수가 아닐떄 false
            break;
        }
    }
    
    if(ljkoa==false){
        printf("C"); //소수가 아닐때
    }else{
        printf("P"); //소수일떄
    }
    return 0;
}