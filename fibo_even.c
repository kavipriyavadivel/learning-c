#include<stdio.h>
int main(){
    int n,a,b,c;
    scanf("%d",&n);
    a=0;
    b=1;
    c=0;
    for(int i=1;i<=n;i++){
        if(c%2==0)
            printf("%d ",c);
        a=b;
        b=c;
        c=a+b;
    }
}