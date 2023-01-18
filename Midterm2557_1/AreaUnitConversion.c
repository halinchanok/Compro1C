#include<stdio.h>
void main(){
    int Rai, Sqaure_Wa;
    scanf("%d%d", &Rai, &Sqaure_Wa);
    int sum = Sqaure_Wa/400;
    if(Rai==0 && Sqaure_Wa<400){
        printf("%d w", Sqaure_Wa);
    }else{
        if(Sqaure_Wa-(sum*400) !=0){
            printf("%d r %d w", Rai+sum, Sqaure_Wa-(sum*400));
        }else{
            printf("%d r ", Rai+sum);
        } 
    }
    
}