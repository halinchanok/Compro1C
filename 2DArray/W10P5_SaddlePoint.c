#include<stdio.h>
#include<limits.h>
void main(){
    int R , C;
    scanf("%d%d", &R, &C);
    int arr[R][C];
    for(int i=0; i<R; i++){
        for(int j=0; j<C; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    int c_Min, c_Max, r_Min, r_Max;
    int s1 = 0, s2 = 0;
    for(int i=0; i<R; i++){
        int max = INT_MIN;
        int min = INT_MAX;
        for(int j=0; j<C; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
                c_Min = j;
                r_Min = i;
            }
            if(arr[i][j] < min){
                min = arr[i][j];
                c_Max = j;
                r_Max = i;
            }
        }
        for(int j=0; j<)
        int ck1 = 0, ck2 =0;
        for(int k=0; k<R; k++){
            if(arr[c_Min][k] > max) 
                ck1++;
        }
        if(ck1==R-1) 
            s1 = max;

        for(int k=0; k<R; k++){
            if(arr[c_Max][k] < min) 
                ck2++;
        }
        if(ck2==R-1) 
            s2 = min;
    }
    printf("(%d, %d) = %d\n", r_Min, c_Min, s1);
    printf("(%d, %d) = %d", r_Max, c_Max, s2);
}