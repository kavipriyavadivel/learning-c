#include<stdio.h>
int main(){
    int n,count=0;
    scanf("%d",&n);
    if(n==0)
        printf("%d",1);
    else{
        while(n>0){
            count++;
            n/=10;
        }
        printf("%d",count);
    }
return 0;
}