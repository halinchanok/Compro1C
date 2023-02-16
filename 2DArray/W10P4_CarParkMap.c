#include<stdio.h>
void main(){
    int M, N;
    scanf("%d%d", &M,&N);
    int arr[M][N];
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            arr[i][j] = 0;
        }
    }
    int K;
    scanf("%d", &K);
    for(int i=0; i<K; i++){
        int R, C;
        scanf("%d%d", &R,&C);
        arr[R-1][C-1]=1;
    }
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            if(arr[i][j]==1){
                printf("x");
            }else if(arr[i][j]==0){
                printf("_");
            }
        }printf("\n");
    }
}