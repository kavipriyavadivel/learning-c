#include<stdio.h>
int main(){
    int n,index=-1,tar;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&tar);
    for(int i=0;i<n;i++){
        if(tar==arr[i]){
            index=i;
            break;
        }
    }
    if(index==-1){
        printf("Target not found");
    }
    else{
        for(int i=0;i<n;i++){
            if(index!=i){
                printf("%d ",arr[i]);
            }
        }
    }
}