#include <stdio.h>

int main(){
    int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++) {
        int r=i%10;
		if(i % 3 == 0){
			printf("0 ");}
		else if(r== 3 || r == 6 || r == 9){
			printf("0 ");}
		else if(i % 10 == 3 || i % 10 == 6 || i % 10 == 9){
			printf("0 ");
        }
		else{
			printf("%d ", i);}
    }
  
    return 0;
}