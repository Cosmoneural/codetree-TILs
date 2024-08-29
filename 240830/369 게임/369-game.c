#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
        int a;
    scanf("%d", &a);
    for(int i=1;i<=a;i++){
        int temp = i;
        int r = temp%10;
        while (temp>0){
        
        if(i%3==0 || r == 3 || r == 6 || r == 9) {
            printf("0 ");
        }temp = temp / 10;

        }
        printf("%d ", i);
        }
      return 0;  
    }