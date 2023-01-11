#include<stdio.h>
void main(){
    int x;
    scanf("%d",&x);

    for(int i=1; i<=12; i++){
        if(x>=1 && x<=8){
            printf("%d x %2d = %2d\n", x, i, x*i);
        }
        if(x>=9 && x<=83){
            printf("%d x %2d = %3d\n", x, i, x*i);
        }
        if(x>=84 && x<=99){
            printf("%d x %2d = %4d\n", x, i, x*i);
        }
    }
    if(x<1 || x>99){
        printf("Number is out of range");
    }

}
