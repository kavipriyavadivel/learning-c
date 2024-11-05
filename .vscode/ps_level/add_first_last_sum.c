#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }   
    for(int i=0;i<n/2;i++){
        if((n%2==0) && (i==(n/2)-1))
            break;
        sum+=arr[i];
    }
    for(int i=(n/2)+1;i<n;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
}