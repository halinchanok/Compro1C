#include<stdio.h>
void main(){
    int n,count=0;
    scanf("%d", &n);
    int a[n];
    for (int i=0 ; i<n ; i++){
        scanf("%d", &a[i]);
    }
    int x;
    scanf("%d", &x);
    for (int j=0 ; j<n ; j++){
        if (x==a[j]){
        printf("%d ", j+1);
        count++;
        }
    }
    if (count==0){
     printf("0");
    }
}
