#include<stdio.h>
void main(){
    double sum2=0;
    double count=0, sum=0;
    int count1=0;
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d", &a[i]);
    }
    int x, y;
    scanf("%d%d", &x, &y);
    for(int i=0; i<n; i++){
        if(x<=a[i] && y>=a[i]){
            sum+=a[i];
            count1++;
            
        }
    }
    sum2=sum/count1;
    printf("%d\n", count1);
    if(count1==0){
        printf("none");
    }else{
        printf("%.2lf", sum2);
    }
}