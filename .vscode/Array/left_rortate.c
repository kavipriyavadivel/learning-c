#include<stdio.h>
int main(){
    int n,d;
    scanf("%d %d",&n,&d);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<d;i++){
        int temp=arr[0];
        for(int j=0;j<n-1;j++){
            arr[j]=arr[j+1];
        }
        arr[n-1]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}