#include<stdio.h>
int main(){
    int n,tar,count=0;
    scanf("%d %d",&n,&tar);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]%tar==0){
            count++;
        }
    }
    printf("%d",count);
}