#include<stdio.h>
int palin(int n){
    int rev=0;
    while(n>0){
        rev=rev*10+(n%10);
        n/=10;
    }
    return rev;
}
int main(){
    int n,count=0;
    scanf("%d",&n);
    for(int i =1;i<=n;i++){
        int rev=0;
        rev=palin(i);
        if(i==rev){
            count+=i;
        }
    }
    printf("%d",count);
}