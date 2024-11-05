#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int p;
    scanf("%d",&p);
    for(int i=0;i<n;i++){
        int min=arr[i];
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(min>arr[j]){
                min=arr[j];
                min_index=j;
            }
        }
        int temp=arr[i];
        arr[i]=arr[min_index];
        arr[min_index]=temp;
    }
    printf("\n%d %d",arr[p-2],arr[p]);
}