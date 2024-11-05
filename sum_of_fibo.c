#include<stdio.h>
int fibo(int n){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
    return fibo(n-1)+fibo(n-2);
}
int main(){
    int n,sum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        sum+=fibo(i);        
    }
    printf("sum = %d",sum);
}