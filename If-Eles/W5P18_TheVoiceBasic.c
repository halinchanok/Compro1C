#include<stdio.h>
void main(){
    int k, k1, k2, s1, s2, g;
    scanf("%d %d %d %d %d %d", &k, &k1, &k2, &s1, &s2, &g);

    if(g==1){
        if(s1>=9 && k1<k){
            printf("1");
        }else if(s2>=9 && k2<k){
            printf("2");
        }else{
            printf("0");
        }
    }
    if(g==2){
        if(s2>=9 && k2<k){
            printf("2");
        }else if(s1>=9 && k1<k){
            printf("1");
        }else{
            printf("0");
        }
    }

}