#include<stdio.h>
int main(){
    int n,pos,tar;
    scanf("%d %d %d",&n,&tar,&pos);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=n;i>pos-1;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=tar;
    for(int i=0;i<=n;i++){
        printf("%d ",arr[i]);
    }
}