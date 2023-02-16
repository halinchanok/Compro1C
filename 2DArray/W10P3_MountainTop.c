#include<stdio.h>
void main(){
    int N;
    scanf("%d", &N);
    int arr[N][N];
    for(int r=0; r<N; r++){
        for(int c=0; c<N; c++){
            scanf("%d", &arr[r][c]);
        }
    }
    int count = 0;
    for(int r=1; r<N-1; r++){
        for(int c=1; c<N-1; c++){
            int ck = 0;
            for(int i=r-1; i<=r+1; i++){
                for(int j=c-1; j<=c+1; j++){
                    if(arr[r][c] > arr[i][j]){
                        ck++;
                    }
                }
            }
            if(ck==8){
                count++;
            }
        }
    }
    printf("%d\n", count);
    for(int r=1; r<N-1; r++){
        for(int c=1; c<N-1; c++){
            int ck = 0;
            for(int i=r-1; i<=r+1; i++){
                for(int j=c-1; j<=c+1; j++){
                    if(arr[r][c] > arr[i][j]){
                        ck++;
                    }
                }
            }
            if(ck==8){
                printf("%d %d %d\n", arr[r][c], r, c);
            }
        }
    }
    
}