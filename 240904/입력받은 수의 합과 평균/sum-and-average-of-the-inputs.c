#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a,n;
    scanf("%d",&a);
    int sum=0;
    int cnt=0;
    double summm=0;
    int i=0;
    while(i<a){
        scanf("%d",&n);
        sum+=n;
        cnt+=1;
        i++;
    }summm=(double)sum/cnt;
    printf("%d %.1lf",sum,summm);
    return 0;
}