#include<stdio.h>
#include<math.h>
int main(){
    int a,r,n;
    scanf("%d %d %d",&a,&r,&n);
    float res;
    res=(a*(1-(pow(r,n))))/(1-r);
    printf("%f",res);
}