#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int temp,j=0;
    for(int i=n-1;i>=j;i--){
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
        j++;
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}