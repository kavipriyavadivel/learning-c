#include<stdio.h>
int main(){
    int n,flag=1;
    scanf("%d",&n);
    if(n<=1){
        printf("Composite");
    }
    else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                flag=0;
                printf("Composite Prime");
                break;
            }
        }
        if(flag==1){
            printf("Prime");
        }
    }
}