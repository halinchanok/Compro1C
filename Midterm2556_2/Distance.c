#include<stdio.h>
void main(){
    int X, H, M;
    scanf("%d%d%d", &X, &H, &M);
    int Second = ((H*60)+M)*60;
    double sum = ((X*5)/18.0)*Second;
    
    if(X<=0){
        printf("%0.1lf", (sum/1000)*-1);
        printf("\nreverse");
    }else{
        printf("%0.1lf", sum/1000);
    }
}