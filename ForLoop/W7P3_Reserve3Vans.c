#include<stdio.h>
void main(){
    int N;
    scanf("%d", &N);
    int A=0, B=0, C=0;
    for(int i=0; i<N; i++){
        int n;
        scanf("%d", &n);
        if(A<=B && A<=C){
            A+=n;
            printf("A\n");
        }else if(B<=A && B<=C){
            B+=n;
            printf("B\n");
        }else if(C<=A && C<=B){
            C+=n;
            printf("C\n");
        }
    }
}