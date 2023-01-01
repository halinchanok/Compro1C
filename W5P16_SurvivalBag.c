#include<stdio.h>
void main(){
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    int a = x/3;
    int b = y/4;
    int c = z/2;

    if(a<b && a<c){
        printf("%d %d %d %d", a, x-(a*3), y-(a*4), z-(a*2));
    }else if(b<a && b<c){
        printf("%d %d %d %d", b, x-(b*3), y-(b*4), z-(b*2));
    }else if(c<b && c<a){
        printf("%d %d %d %d", c, x-(c*3), y-(c*4), z-(c*2));
    }
}