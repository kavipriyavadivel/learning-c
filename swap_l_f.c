#include<stdio.h>
int main(){
    int n,l,f,count=0,s;
    scanf("%d",&n);
    l=n%10;
    count=log10(n);
    f=n/(int)pow(10,count);
    s=l*(int)pow(10,count);
    s=s+(n%(int)pow(10,count));
    s-=l;
    s+=f;
    printf("%d",s);
}