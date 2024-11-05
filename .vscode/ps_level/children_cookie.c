#include<stdio.h>
int main(){
    int n,cookie,count=0;
    scanf("%d %d",&n,&cookie);
    int arr[n];
    int cook[cookie];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<cookie;i++){
        scanf("%d",&cook[i]);
    }
    for(int i=0;i<cookie;i++){
        for(int j=0;j<n;j++){
            if(cook[i]==arr[j]){
                count++;
                arr[j]=-1;
                break;
            }
        }
    }
    printf("%d",count);
}



