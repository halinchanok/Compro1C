#include<stdio.h>
void main(){
    int n,sum1=0, sum2=0;
    scanf("%d", &n);
    int a[n], b[n];
    for (int i=0 ; i<n ; i++){
        scanf("%d", &a[i]);
    }
    for (int i=0 ; i<n ; i++){
        scanf("%d", &b[i]);
    }
    for (int j=0 ; j<n ; j++){
        if (a[j]>b[j]){
            sum1+=2;
        }
        else if (a[j]<b[j]){
            sum2+=2;
        }
        else if (a[j]==b[j]){
            sum1++;
            sum2++;
        }
    }
    if (sum1>sum2){
        printf("Team 1 wins\n");
        printf("Score %d to %d", sum1, sum2);
    }
    else if (sum1<sum2){
        printf("Team 2 wins\n");
        printf("Score %d to %d", sum2, sum1);
    } else {
        printf("Draw game\n");
        printf("Score %d to %d", sum1, sum2);
    }
}