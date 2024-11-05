#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char search;
    fgets(str,100,stdin);
    scanf("%c",&search);
    int i=0;
    int flag=0;
    int index=0;
    while(str[i]!='\0'){
        if(str[i]==search){
            flag=1;
            index=i;
        }
        i++;
    }
    if(flag){
        printf("%c found at the index : %d",search,index);
    }
    else{
        printf("%c not found.",search);
    }
}