#include<stdio.h>
void main(){
    int N;
    scanf("%d", &N);
    int star=1, space=N/2;
    for(int r=1; r<=N/2; r++){
        for(int c=1; c<=space; c++){
            printf(" ");
        }
        for(int c=1; c<=star; c++){
            printf("*");
        }printf("\n");
        space-=1;
        star+=2;
    }
    for(int r=N/2; r<N; r++){
        for(int c=1; c<=space; c++){
            printf(" ");
        }
        for(int c=1; c<=star; c++){
            printf("*");
        }printf("\n");
        space+=1;
        star-=2;
    }
}