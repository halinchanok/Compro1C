#include<stdio.h>
void main(){
    int score_m1, score_m2, score_m3, score_m4;
    scanf("%d%d%d%d", &score_m1, &score_m2, &score_m3, &score_m4);
    int N, pass = 0;
    scanf("%d", &N);
    int C1 = 0, C2 = 0, C3 = 0, C4 =0;
    for(int i=0; i<N; i++){
        int score1, score2, score3, score4;
        scanf("%d%d%d%d", &score1, &score2, &score3, &score4);
        int count = 0;
        if(score1>=score_m1){
            count++;
            C1++;
        }
        if(score2>=score_m2){
            count++;
            C2++;
        }
        if(score3>=score_m3){
            count++;
            C3++;
        }
        if(score4>=score_m4){
            count++;
            C4++;
        }
        if(count>2){
            printf("pass\n");
            pass++;
        }else printf("fail\n");
    }
    printf("%d\n", pass);
    printf("\n%d %d %d %d", C1, C2, C3, C4);

}