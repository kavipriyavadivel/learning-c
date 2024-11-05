#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int flag=1;
        for(int j=i+1;j<n;j++){
            if(arr[i]<arr[j]){
                printf("%d ",arr[j]);
                flag=0;
                break;
            }
        }
        if(flag){
            printf("-1 ");
        }
    }
}// 1 4 6 2 5 