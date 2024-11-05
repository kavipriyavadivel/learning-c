#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int k=1;k<=n;k++){
        for(int a=1;a<=n;a++){
            if(a==1||a==n||k==1||k==n){
                printf("* ");
            }
            else{
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}