#include<stdio.h>
int main(){
    int n,temp,count=0,sum=0;
    scanf("%d",&n);
    temp=n;
    while(n>0){
        count++;
        n/=10;
    }
    n=temp;
    while(n>0){
        sum+=pow((n%10),count);
        n/=10;
    }
    if(sum==temp)
        printf("Amstrong number");
    else    
        printf("Not a Amstrong number");
}