#include<stdio.h>
int main(){
    int n,rev=0,place=1;
    scanf("%d",&n);
    while(n>0){
        rev=((n%10+1)*place)+rev;
        place*=10;
        n/=10;
    }
    printf("%d",rev);
}