#include<stdio.h>
int main(){
    float a,d,n;
    float sum=0;
    scanf("%f %f %f",&a,&d,&n);
    for(int i=1;i<n;i++){
        sum+=1/a;
        a+=d;
    }
    printf("%f",sum);
}