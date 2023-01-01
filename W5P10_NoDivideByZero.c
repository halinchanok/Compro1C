#include<stdio.h>
void main(){
    double x, y, z;
    scanf("%lf%lf%lf", &x, &y, &z);
    
    if(z!=0){
        printf("%lf", (x+y)/z);
    }else{
        printf("cannot divide by zero");
    }
}