#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]!=' ')
            printf("%c",str[i]);
        i++;
    }
}