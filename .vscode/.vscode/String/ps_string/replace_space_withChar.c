#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100],ch;
    fgets(str,100,stdin);
    scanf("%c",&ch);
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str);
    for(int i=0;i<len;i++){
        if(str[i]==' '){
            str[i]=ch;
        }
    }
    printf("%s",str);
}