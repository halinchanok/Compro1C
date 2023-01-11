#include<stdio.h>
void main(){
    for(int i=0; i<7; i++){
        int water, sugar;
        scanf("%d%d", &water, &sugar);
        int W = water/250;
        int S = sugar/15;
        if(W<S){
            printf("%d ", W);
            if(water-(W*250)>0){
                printf("water");
            }printf("\n");
        }else{
            printf("%d ", S);
            if(water-(S*250)>0){
                printf("water");
            }printf("\n");
        }
    }
}