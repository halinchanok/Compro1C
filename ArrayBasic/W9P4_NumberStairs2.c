#include<stdio.h>
void main(){
    int arr[501];
    int count=1;
    while(1){
        scanf("%d", &arr[count]);
        if(arr[count]<0 || arr[count]>9){
            break;
        }
        count++;
    }
    count-=1;
    for(int i=1; i<=count; i++){
        for(int j=1; j<=count; j++){
            if(j>count-i){
                printf("%d", arr[i]);
            }else{
                printf(" ");
            }
        }printf("\n");
    }
}