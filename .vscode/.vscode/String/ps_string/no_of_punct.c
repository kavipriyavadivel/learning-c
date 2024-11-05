#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str);
    int count=0;
    for(int i=0;i<len;i++){
        if(ispunct(str[i]))
            count++;
    }
    printf("%d",count);
}