#include<stdio.h>
void main(){
    int n;
    scanf("%d", &n);
    if(n<=0){
        printf("Invalid input");
    }
    for(int i=1; i<=n; i++){
        printf("%d\n", i);
    }
    
}