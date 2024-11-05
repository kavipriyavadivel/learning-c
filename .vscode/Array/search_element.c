#include<stdio.h>
int main(){
    int n,tar,flag=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    scanf("%d",&tar);
    for(int i=0;i<n;i++){
        if(arr[i]==tar){
            printf("%d",i);
            flag=1;
        }
    }
    if(flag==0){
        printf("-1");
    }
}