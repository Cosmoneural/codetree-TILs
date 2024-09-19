#include <stdio.h>
#include <stdbool.h>
int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    bool yeah=true;
    for(int i=a;i<=b;i++){
        if(i%c==0){
            yeah=false;
        }
    }if(yeah==true){
        printf("YES");
    }else{
        printf("NO");
    }
    return 0;
}