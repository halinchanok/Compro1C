#include<stdio.h>
void main(){
    int c00 = 0, c01 = 0, c10 = 0, c11 = 0;
    int before = -1;
    while(1){
        int N;
        scanf("%d", &N);
        if(N>1 || N<0){
            break;
        }
        if(before==0 && N==0){
            c00++;
        }
        if(before==0 && N==1){
            c01++;
        }
        if(before==1 && N==0){
            c10++;
        }
        if(before==1 && N==1){
            c11++;
        }
        before=N;
    }
    printf("%d\n%d\n%d\n%d", c00, c01, c10, c11);
}