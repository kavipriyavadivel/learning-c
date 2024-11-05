#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=n;i<=n+2;i++){
        printf("%d ",(int)pow(i,3));
    }
}