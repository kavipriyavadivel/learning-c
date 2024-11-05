#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i<=n+9;i++){
        if((i%4==0 && i%100!=0)||(i%400==0 && i%100==0)){
            printf("%d ",i);
        }
    }
}