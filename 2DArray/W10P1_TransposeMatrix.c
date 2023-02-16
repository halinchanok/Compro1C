#include<stdio.h>
void main(){
    int R, C;
    scanf("%d%d", &R, &C);
    int arr[R][C];
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    for(int i=0; i<C; i++){
        for(int j=0; j<R; j++){
            printf("%d ", arr[j][i]);
        }printf("\n");
    }

}