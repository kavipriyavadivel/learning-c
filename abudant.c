#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int temp=n;
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            sum+=i;
        }
    }
    if(sum>temp){
        printf("Abudant number");
    }
    else{
        printf("Not a abudanr number");
    }
}