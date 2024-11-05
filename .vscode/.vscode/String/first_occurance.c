#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char search;
    fgets(str,100,stdin);
    scanf(" %c",&search);
    int i=0;
    int flag=0;
    while (str[i]!='\0')
    {   flag=0;
        if(str[i]==search){
            flag=1;
            printf("%c found at index : %d",search,i);
            break;
        }
        i++;
    }
    if(flag==0){
        printf("%c not found",search);
    }
}