#include<stdio.h>
int palin(int n){
    int rev=0;
    while(n>0){
        rev=rev*10+(n%10);
        n/=10;
    }
    return rev;
}
int main(){
    int n,count=0;
    scanf("%d",&n);
    while(count<5){
        int rev=0;
        rev=palin(n);
        if(n==rev){
            printf("%d ",rev);
            count++;
        }
        n++;
    }
}