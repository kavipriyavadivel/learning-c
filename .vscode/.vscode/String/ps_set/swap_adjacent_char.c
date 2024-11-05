#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str);
    for(int i=0;i<len-1;i+=2){
        char swap=str[i];
        str[i]=str[i+1];
        str[i+1]=swap;
    }
    printf("%s",str);
}