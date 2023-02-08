#include<stdio.h>
void main(){
    int N, star=0, m=(N/2)+1;
    scanf("%d", &N);
    for(int r=1; r<=N/2; r++){
        for(int c=1; c<=N; c++){
            if(c>=m-star && c<=m+star){
                printf("*");
            }else printf(" ");  
        }star++;
        printf("\n");
    }
    for(int r=N/2; r<N; r++){
        for(int c=1; c<=N; c++){
            printf("*");
        }printf("\n");
    }
}