#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }
    int temp=sum;
    int digit_sum=0;
    while(sum>0){
        digit_sum=digit_sum+(sum%10);
        sum/=10;
    }
    printf("%d",temp/digit_sum);
}