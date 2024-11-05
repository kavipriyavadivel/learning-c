#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int main(){
    int n,sum=0,closest_i=0,closest_j=1;
    scanf("%d",&n);
    if(n>=2 && n<=10){
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int closest_sum=INT_MAX;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                sum=arr[i]+arr[j];
                if(abs(closest_sum)>abs(sum)){
                    closest_sum=sum;
                    closest_i=arr[i];
                    closest_j=arr[j];
                }
            }
        }
        printf("%d,%d",closest_i,closest_j);
    }
    else{
        printf("Invalid");
    }
}