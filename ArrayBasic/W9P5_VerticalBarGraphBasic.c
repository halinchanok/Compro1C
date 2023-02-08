#include<stdio.h>
void main(){
    int N, max=-1;
    scanf("%d", &N);
    int arr[N];
    for(int i=1; i<=N; i++){
        scanf("%d", &arr[i]);
        if(arr[i]>max){
            max=arr[i];
        }
    }
    for(int i=1; i<=max; i++){
        for(int j=1; j<=N; j++){
            if(i>max-arr[j]){
                printf("*");
            }else{
                printf(" ");
            }
        }printf("\n");
    }

}