#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int n;
    int i=3;
    scanf("%d",&n);
    while(i<n+1){
        printf("%d ", i);
        i += 3;
    }
    return 0;
}