#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[]="kavi\npriya";
    int i=0;
    while(str[i]!='\0' && str[i]!='\n'){
        printf("%c", str[i]);
        i++;
    }
}