#include<stdio.h>
void main(){
    int K, N;
    scanf("%d%d", &K, &N);
    int total = 0;
    int date = 0;
    for(int i=0; i<N; i++){
        int n;
        scanf("%d", &n);
        total+=n;
        date = total/(K*100);
        if(date*(K*100)<total){
            date++;
        }
        printf("%d\n", date);
    }
}