#include<stdio.h>
void main(){
    int n, count=0;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        if(n%10==9){
            printf("SATHU ");
            count++;
        }
        n=n/10;
     }
    printf("\n");
    if(count==9){
        printf("OHH! Serious SATHU");
    }else if(count==0){
        printf("Hope to find SATHU next time");
    }
}