#include<stdio.h>
int main(){
    float a,d,n,res=0;
    scanf("%f %f %f",&a,&d,&n);
    for(int i=1;i<n;i++){
        res+=1/a;
        a+=d;
    }
    printf("%f",res);
}