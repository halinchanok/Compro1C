#include<stdio.h>
void main(){
   int N, K;
   scanf("%d%d", &N, &K);
   int arr[N];
   for(int i=1; i<N; i++){
        scanf("%d", &arr[i]);
   } 
   int max=-1;
   for(int i=1+K; i<=N-K; i++){
      int sum=arr[i];
      for(int j=1; j<=K; j++){
         
      }
      if(sum>max){
         max=sum;
      }
   }
   printf("%d", max);
}