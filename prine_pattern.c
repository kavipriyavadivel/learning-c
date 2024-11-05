#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int k=2;k<=n;k++){
        int flag=1;
        for(int a=1;a<=k;a++){
            for(int i=2;i<=k/2;i++){
                if(k%i==0){
                    flag=0;
                    break;
                }
            }
            if(flag==1){
                printf("* ");
            }
        }
        if(flag==1)
        printf("\n");
    }
}