#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int k=n;k>=1;k--){
        for(int a=1;a<=k;a++){
            printf("%d ",a);
        }
        printf("\n");
    }
    return 0;
}