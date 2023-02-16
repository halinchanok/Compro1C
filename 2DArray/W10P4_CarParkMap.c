#include<stdio.h>
void main(){
    int R, C;
    scanf("%d%d%d", &R, &C);
    int arr[R][C];
    for(int i=1; i<=R; i++){
        for(int j=1; j<=C; j++){
            arr[i][j] = 0;
        }
    }
    
    int K;
    scanf("%d", &K);
    for(int i=0; i<K; i++){
        int M, N;
        scanf("%d%d", &M, &N);
        arr[M][N] = 1;
    }
    for(int i=1; i<=R; i++){
        for(int j=1; j<=C; j++){
            printf("%d ", arr[i][j]);
        }printf("\n");
    }
    for(int i=1; i<=R; i++){
        for(int j=1; j<=C; j++){
            if(arr[i][j]==0){
                printf("_");
            }else if(arr[i][j]==1){
                printf("x");
            }
        }printf("\n");
    }
}