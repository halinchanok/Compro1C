#include<stdio.h>
void main(){
    int N;
    scanf("%d", &N);
    int c_1000=0, c_500=0, c_100=0, c_50=0, c_20=0, c_10=0, c_5=0, c_1=0;
    for(int i=0; i<N; i++){
        int n;
        scanf("%d", &n);
        for(int i=1; i<=8; i++){
            int count=0;
            if(i==1){
                if(n>=1000){
                    count=n/1000;
                    c_1000+=count;
                    n-=1000*count;
                }
            }else if(i==2){
                if(n>=500){
                    count=n/500;
                    c_500+=count;        
                    n-=500*count;
                }
            }else if(i==3){
                if(n>=100){
                    count=n/100;
                    c_100+=count;
                    n-=100*count;
                }
            }else if(i==4){
                if(n>=50){
                    count=n/50;
                    c_50+=count;     
                    n-=50*count;
                }
            }else if(i==5){
                if(n>=20){
                    count=n/20;
                    c_20+=count;
                    n-=20*count;
                }
            }else if(i==6){
                if(n>=10){
                    count=n/10;
                    c_10+=count;
                    n-=10*count;
                }
            }else if(i==7){
                if(n>=5){
                    count=n/5;
                    c_5+=count;
                    n-=5*count;
                }
            }else if(i==8){
                if(n>=1){
                    count=n/1;
                    c_1+=count;
                    n-=1*count;
                }
            }  
      }
    }
    printf("1000B : %d\n", c_1000);
    printf("500B : %d\n", c_500);
    printf("100B : %d\n", c_100);
    printf("50B : %d\n"), c_50;
    printf("20B : %d\n", c_20);
    printf("10B : %d\n", c_10);
    printf("5B : %d\n", c_5);
    printf("1B : %d\n", c_1);
}