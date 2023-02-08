#include<stdio.h>
void main(){
    int N, X, count=0;
    scanf("%d", &N);
    int arr[N+1];
    for(int i=1; i<=N; i++){
        scanf("%d", &arr[i]);
    }
    scanf("%d", &X);
    for(int j=1; j<=N; j++){
        if(X==arr[j]){
            printf("%d ", j);
            count++;
        }
    }
    if(count==0){
        printf("0");
    }
}