#include<stdio.h>
int main(){
    int n,leap_c=0,leap_n=0;
    scanf("%d",&n);
    for(int i=n;i<=n+9;i++){
        if((i%4==0 && i%100!=0)||(i%400==0 && i%100==0)){
            leap_c++;
        }
        else{
            leap_n++;
        }
    }
    printf("leap = %d   Non leap = %d",leap_c,leap_n);
}