#include<stdio.h>
int main(){
    int n,chunk;
    scanf("%d %d",&n,&chunk);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i=i+chunk){
        if(n-i < chunk){
            break;
        }
        printf("[");
        for(int j=i;j<i+chunk && j<n;j++){
            printf("%d",arr[j]);
            if(j<i+chunk-1 && j<n-1){
                printf(",");
            }
        }
        printf("]");
    }    
}