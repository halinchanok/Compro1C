#include<stdio.h>
void main(){
    int x, y;
    scanf("%d%d", &x, &y);
    int m, n;
    scanf("%d%d", &m, &n);
    int sum_M = (m*2) + n; 
    int sum_N = (m*6) + (n*4);

    if(sum_M <= x && sum_N <= y){
        printf("Yes %d %d", x-sum_M, y-sum_N);
    }else{
        if(x-sum_M > 0){
            printf("No 0 %d", abs(y-sum_N));
        }else if(y-sum_N > 0){
            printf("No %d 0", abs(x-sum_M));
        }else
            printf("No %d %d", abs(x-sum_M), abs(y-sum_N));
    }
}