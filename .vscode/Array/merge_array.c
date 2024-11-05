#include<stdio.h>
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int arr1[n1],arr2[n2],arr[n1+n2];
    for(int i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    for(int i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    int i=0,j=0,k=0;
    for(k=0;k<n1+n2;k++){
        if(i>=n1||j>=n2){
            break;
        }
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            i++;
        }
        else{
            arr[k]=arr2[j];
            j++;
        }
    }
    while(i<n1){
        arr[k++]=arr1[i++];
    }
    
    while(j<n2){
        arr[k++]=arr2[j++];
    }
    for(int a=0;a<n1+n2;a++){
        printf("%d ",arr[a]);
    }
}