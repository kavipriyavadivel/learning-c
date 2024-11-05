#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str);
    if(len%2==0){
        printf("Even");
    }
    else{
        int flag=1;
        for(int i=2;i<=len/2;i++){
            flag=1;
            if(len%i==0){
                flag=0;
                break;
            }
        }
        if(flag){
            printf("Odd prime");
        }
        else{
            printf("Odd not prime");
        }
    }
}