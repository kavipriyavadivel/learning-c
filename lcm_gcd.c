#include<stdio.h>
int gcd(int a,int b){
    int min;
    min=a<b?a:b;
    if(a%min==0 && b%min==0)
        return min;
    else
        min--;
}
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    printf("GCD = %d",gcd(n1,n2));
    printf("\nLCM = %d",((n1*n2)/gcd(n1,n2)));
}