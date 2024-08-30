#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a, n;
    scanf("%d", & a);

    int i = 0;
    while (i < a) {
        scanf("%d", & n);
        if (n % 3 == 0 && n % 2 == 1) {
            printf("%d\n", n);
        }
        i++;
    }

}