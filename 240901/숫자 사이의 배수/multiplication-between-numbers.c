#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b;
    scanf("%d %d",&a,&b);
    int i=a;
    int sum=0;
    double summ=0;
    int cnt=0;
    while(i<=b){
        if(i%5==0 || i%7==0){
            //printf("%d\n",i);
            sum+=i;
            cnt++;
        }i++;
    }
    //printf("// %d %d //", sum, cnt);
    summ=((double)sum/cnt);
    printf("%d %.1lf",sum,summ);
    return 0;
}