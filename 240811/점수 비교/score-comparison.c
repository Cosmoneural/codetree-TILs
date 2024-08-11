#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int A1,A2,B1,B2;
    scanf("%d %d %d %d",&A1,&A2,&B1,&B2);
    if(A1>B1 && A2>B2){
    printf("%d",1);
    }else{
        printf("%d",0);
    }
    return 0;
}