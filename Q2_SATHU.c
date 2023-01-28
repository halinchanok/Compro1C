#include<stdio.h>
void main(){
    int N;
    scanf("%d", &N);
    int count = 0;
    while(1){
        int n = N%10;
        if(N==0){
            break;
        }
        if(n==9){
            printf("SATHU ");
            count++;
            if(count==9){
                printf("\nOHH! Serious SATHU ");
            }
        }
        N = N/10;
    }
    if(count==0){
        printf("Hope to find SATHU next time");
    }
}