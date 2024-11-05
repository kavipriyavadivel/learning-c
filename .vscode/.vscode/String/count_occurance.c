#include<stdio.h>
#include<string.h>
int main(){
    char str[100],search;
    fgets(str,100,stdin);
    scanf("%c",&search);
    int count=0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==search){
            count++;
        }
        i++;
    }
    if(count==0){
        printf("%c not found",search);
    }
    else{
        printf("count : %d",count);
    }
}