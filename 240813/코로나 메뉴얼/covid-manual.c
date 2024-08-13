#include <stdio.h>

int main() {
    // 여기에 코드를 작성해주세요.
    int a2,b2,c2;
    char a1,b1,c1;
    int A=0,B,C,D;

    scanf("%c %d %c %d %c %d",&a1,&a2,&b1,&b2,&c1,&c2);
    if(a1=='Y' && a2>=37){
        A=A+1;
    }
    if(a1=='N' && a2>=37){
        B=B+1;
    }
    if(a1=='Y' && a2<37){
        C=C+1;
    }
    if(a1=='N' && a2<37){
        D=D+1;
    }
//////////////////
    if(b1=='Y' && b2>=37){
        A=A+1;
    }
    if(b1=='N' && b2>=37){
        B=B+1;
    }
    if(b1=='Y' && b2<37){
        C=C+1;
    }
    if(b1=='N' && b2<37){
        D=D+1;
    }

    ///////
    if(c1=='Y' && c2>=37){
        A=A+1;
    }
    if(c1=='N' && c2>=37){
        B=B+1;
    }
    if(c1=='Y' && c2<37){
        C=C+1;
    }
    if(c1=='N' && c2<37){
        D=D+1;
    }   

    if(A>=2){
        printf("E");
    }
    else{
        printf("N");
    }

    return 0;
}