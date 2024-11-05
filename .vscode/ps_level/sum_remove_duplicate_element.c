#include<stdio.h>
int main(){
    int n,sum=0,dup=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                dup+=arr[j];
                break;
            }
        }
    }
    printf("%d\n",dup);
    printf("%d\n",sum-dup);
}