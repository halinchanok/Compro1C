#include<stdio.h>
void main(){
    int n;
    scanf("%d", &n);
    for(int i=1; i<=8; i++){
        int count=0;
        if(i==1){
            if(n>=1000){
                count=n/1000;
                printf("1000B : %d\n", count);
                n-=1000*count;
            }
        }else if(i==2){
            if(n>=500){
                count=n/500;
                printf("500B : %d\n", count);
                n-=500*count;
            }
        }else if(i==3){
            if(n>=100){
                count=n/100;
                printf("100B : %d\n", count);
                n-=100*count;
            }
        }else if(i==4){
            if(n>=50){
                count=n/50;
                printf("50B : %d\n");
                n-=50*count;
            }
        }else if(i==5){
            if(n>=20){
                count=n/20;
                printf("20B : %d\n", count);
                n-=20*count;
            }
        }else if(i==6){
            if(n>=10){
                count=n/10;
                printf("10B : %d\n", count);
                n-=10*count;
            }
        }else if(i==7){
            if(n>=5){
                count=n/5;
                printf("5B : %d\n", count);
                n-=5*count;
            }
        }else if(i==8){
            if(n>=1){
                count=n/1;
                printf("1B : %d\n", count);
                n-=1*count;
            }
        }
        
    }
}