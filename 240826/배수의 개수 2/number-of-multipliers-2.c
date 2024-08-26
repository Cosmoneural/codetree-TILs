#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,d,e,f,g,h,i,j;
    scanf("%d %d %d %d %d %d %d %d %d %d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
    int cnt=0;
        if(a%2==1){
            cnt=cnt+1;
        }if(b%2==1){
            cnt=cnt+1;
        }if(c%2==1){
            cnt=cnt+1;
        }if(d%2==1){
            cnt=cnt+1;
        }if(e%2==1){
            cnt=cnt+1;
        }if(f%2==1){
            cnt=cnt+1;
        }if(g%2==1){
            cnt=cnt+1;
        }if(h%2==1){
            cnt=cnt+1;
        }if(i%2==1){
            cnt=cnt+1;
        }if(j%2==1){
            cnt=cnt+1;}
            printf("%d",cnt);
    return 0;
}