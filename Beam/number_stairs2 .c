#include<stdio.h>
void main(){
    int a[501];
    int count=0;
    while (1){
        scanf("%d", &a[count]);
        if (a[count]<0 || a[count]>9){
            break;
        }
        count++;
    }
    for (int i=1 ; i<=count ; i++){
        for (int j=1 ; j<=count-i ; j++){
            printf(" ");
        }
        for (int k=1 ; k<=i ; k++){
            printf("%d", a[i-1]);
        }
        printf("\n");
    }
}