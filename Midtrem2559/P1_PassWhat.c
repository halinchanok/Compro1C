#include<stdio.h>
void main(){
    int score_m1, score_m2, score_m3, score_m4;
    scanf("%d%d%d%d", &score_m1, &score_m2, &score_m3, &score_m4);
    int score1, score2, score3, score4;
    scanf("%d%d%d%d", &score1, &score2, &score3, &score4);
    if(score1>=score_m1){
        printf("1 ");
    }
    if(score2>=score_m2){
        printf("2 ");
    }
    if(score3>=score_m3){
        printf("3 ");
    }
    if(score4>=score_m4){
        printf("4 ");
    }

}