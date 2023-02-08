#include<stdio.h>
void main(){
    int N;
    scanf("%d", &N);
    int A[N], B[N];
    int score_A=0, score_B=0;
    for(int i=1; i<=N; i++){
        scanf("%d", &A[i]);
    }
    for(int i=1; i<=N; i++){
        scanf("%d", &B[i]);
    }
    for(int i=1; i<=N; i++){
        if(A[i]>B[i]){
            score_A+=2;
        }else if(B[i]>A[i]){
            score_B+=2;
        }else{
            score_A++;
            score_B++;
        }
    }
    if(score_A>score_B){
        printf("Team 1 wins\n");
        printf("Score %d to %d", score_A, score_B);
    }else if(score_B>score_A){
        printf("Team 2 wins\n");
        printf("Score %d to %d", score_B, score_A);
    }else{
        printf("Draw game\n");
        printf("Score %d to %d", score_B, score_A);
    }
}