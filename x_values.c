#include<stdio.h>
#include<math.h>
unsigned long long fact(int n){
    if(n==0||n==1){
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
int main(){
    int n,x;
    scanf("%d %d",&n,&x);
    double res=0;
    for(int i=0;i<n;i++){
        res+=((pow(-1,i))*(pow(x,2*i)))/fact(2*i);
    }
    printf("%lf",res);
    return 0;
}