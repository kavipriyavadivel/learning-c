#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    char rev[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    strrev(str);
    // int len=0;
    // while(str[len]!='\0'){
    //     len++;
    // }
    // len=len-1;
    // int i=0;
    // while(len!=-1){
    //     rev[i++]=str[len--];
    // }
    // rev[i]='\0';
    printf("%s",str);
}