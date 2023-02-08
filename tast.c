#include<stdio.h>
void main(){
    int n, sum=0, num;
    scanf("%d", &n);
    for(int i=0; i<20; i++){
        num = n%10;
        sum = sum + num;
        n/=10;
    }
    if(sum%10==9){
        printf("OHH! SERIOUS SATHU");
    }else{
        printf("Hope to find SATHU next time!");
    }
}