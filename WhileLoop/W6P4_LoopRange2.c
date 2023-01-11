#include<stdio.h>
void main(){
    int X, Y;
    scanf("%d%d", &X, &Y);
    int i=X;
    if(X<Y){
        while(i<=Y){
            printf("%d ", i);
            i++;
        }
    }else{
        while(i>=Y){
            printf("%d ", i);
            i--;
        }
    }
}