#include<stdio.h>
int main(){
    int n;
    printf("Enter the size: ");
    scanf("%d",&n);
    for(int row=1;row<=n;row++){
        for(int col=n;col>row;col--){
            printf(" ");
        }
        printf("*");
        for(int col=1;col<(row-1)*2;col++){
            printf(" ");
        }
        if(row==1){
            printf("\n");
        }
        else{
            printf("*\n");
        }
    }
    for(int row=n-1;row>=1;row--){
        for(int col=n;col>row;col--){
            printf(" ");
        }
        printf("*");
        for(int col=1;col<(row-1)*2;col++){
            printf(" ");
        }
        if(row==1){
            printf("\n");
        }
        else{
            printf("*\n");
        }
    }
}
