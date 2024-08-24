#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,n;
    scanf("%d %d",&a,&n);
    int ab=a+n; // 일단 한번 더했어.

    for(int i=1;i<=n;i++) {
    //for(int i=0;i<n;i++){ //n번 반복하려고 합니다.
        //1 2 3 4 5 6 => i
        //0 1 2 3 4 5 => i
        printf("%d\n", ab); // 일단 그리고 출력
        ab = ab + n; // a에 n을 더하는 과정
    }
    return 0;
}