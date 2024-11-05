#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        int min=arr[i];
        int min_index=i;
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                min_index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
    if(n%2!=0){
        printf("%d",arr[n/2]);
    }
    else{
        printf("%d",(arr[n/2]+arr[(n/2)-1])/2);
    }
}