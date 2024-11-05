#include<stdio.h>
int main(){
    int n,tar,tar_index;
    scanf("%d %d",&n,&tar);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]==tar){
            tar_index=i;
            break;
        }
    }
    n--;
    for(int i=tar_index;i<n;i++){
        arr[i]=arr[i+1];
    }
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}