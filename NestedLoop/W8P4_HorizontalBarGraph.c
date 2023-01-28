#include<stdio.h>
void main(){
    while(1){
        int N;
        scanf("%d", &N);
        if(N<=0){
            break;
        }
        for(int i=0; i<N; i++){
            printf("*");
        }printf("\n");
    }
}