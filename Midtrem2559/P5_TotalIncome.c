#include<stdio.h>
void main(){
    int N;
    scanf("%d", &N);
    int count=0;
    int sum=0;
    for(int i=0; i<N; i++){
        int n;
        scanf("%d", &n);
        if(n<4){
            count++;
            if(count==3){
                break;
            }
        }else count=0;

        if(n>=4 && n<8){
            sum+=150;
        }else if(n==8){
            sum+=300;
        }else if(n>8 && n<12){
            sum = sum+(300)+((n-8)*50);
        }else if(n>=12){
            sum+=500;
        }
    }
    printf("%d", sum);
}