#include<stdio.h>
int main(){
    int n,d;
    scanf("%d %d",&n,&d);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<d;i++){
        int temp=arr[n-1];
        for(int j=n;j>0;j--){
            arr[j-1]=arr[j-2];
        }
        arr[0]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}