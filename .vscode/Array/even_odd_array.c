#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n],even[n],odd[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j=0,k=0,e_count=0,o_count=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2==0){
            even[j++]=arr[i];
            e_count++;
        }
        else{
            odd[k++]=arr[i];
            o_count++;
        }
    }
    for(int i=0;i<e_count;i++){
        printf("%d ",even[i]);
    }
    printf("\n");
    for(int i=0;i<o_count;i++){
        printf("%d ",odd[i]);
    }
}