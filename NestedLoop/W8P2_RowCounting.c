#include<stdio.h>
void main(){
    int R, C, count=1;
    scanf("%d%d", &R, &C);
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            printf("%d ", count);
            count++;
        }printf("\n");
    }
}