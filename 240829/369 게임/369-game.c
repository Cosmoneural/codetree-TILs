#include <stdio.h>

int contains_3_6_9(int number) {
    while (number > 0) {
        int digit = number % 10;
        if (digit == 3 || digit == 6 || digit == 9) {
            return 1;
        }
        number /= 10;
    }
    return 0; 
}

int main() {
    int a;
    scanf("%d", &a);
    for (int i = 1; i <= a; i++) {
        if (i % 3 == 0 || contains_3_6_9(i)) {
            printf("%d ", 0);
        } else {
            printf("%d ", i);
        }
    }
    return 0;
}