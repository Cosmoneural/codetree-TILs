#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    double A1,A2;
    scanf("%lf %lf",&A1,&A2);
    if(A1>=1.0 && A2>=1.0){
        printf("High");
    }else if(A1>=0.5 && A2>=0.5){
        printf("Middle");
    }else{
        printf("Low");
    }
    return 0;
}