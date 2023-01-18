#include<stdio.h>
void main(){
    int score_m1, score_m2, score_m3, score_m4;
    scanf("%d%d%d%d", &score_m1, &score_m2, &score_m3, &score_m4);
    int score1, score2, score3, score4;
    scanf("%d%d%d%d", &score1, &score2, &score3, &score4);
    int count = 0;
    if(score1>=score_m1){
        printf("1 ");
        count++;
    }
    if(score2>=score_m2){
        printf("2 ");
        count++;
    }
    if(score3>=score_m3){
        printf("3 ");
        count++;
    }
    if(score4>=score_m4){
        printf("4 ");
        count++;
    }
    if(count == 0){
        printf("0");
    }
    if(count>2){
        printf("\npass");
    }else printf("\nfail");
}