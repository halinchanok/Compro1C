#include<stdio.h>
#include<limits.h>
void main(){
    int R, C;
    scanf("%d%d", &R, &C);
    int arr[R][C];
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int count = 0 ;
    for(int i=0; i<R; i++){
        int max = INT_MIN;
        int min = INT_MAX;
        for(int j=0; j<C; j++){
            if(arr[i][j]>max){
                max=arr[i][j];
            }
            if(arr[i][j]<min){
                min=arr[i][j];
            }
        }
        for(int j=0; j<C; j++){
            if(arr[i][j]==max){
                int ck = 0;
                for(int k=0; k<R; k++){
                    if(arr[i][j] > arr[k][j]){
                        ck++;
                    }
                }
                if(ck==0){
                    printf("(%d, %d) = %d\n", i, j, arr[i][j]);
                    count++;
                }
            }
        }
        for(int j=0; j<C; j++){
            if(arr[i][j]==min){
                int ck = 0;
                for(int k=0; k<R; k++){
                    if(arr[i][j] < arr[k][j]){
                        ck++;
                    }
                }
                if(ck==0){
                    printf("(%d, %d) = %d\n", i, j, arr[i][j]);
                    count++;
                }
            }
        }
    }
    if(count==0){
        printf("None");
    }
}