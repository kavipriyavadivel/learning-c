#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char cstr[100];
    fgets(str,100,stdin);
    int i=0;
    while(str[i]!='\0'){
        cstr[i]=str[i];
        i++;
    }
    cstr[i]='\0';
    printf("%s",cstr);
}