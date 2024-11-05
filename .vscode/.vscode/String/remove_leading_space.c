#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i=0,j=0;
    while(str[i]==' '||str[i]=='\t'||str[i]=='\n')
        i++;
    while(str[i]!='\0'){
        str[j]=str[i];
        j++;
        i++;
    }
    str[j]='\0';
    printf("%s",str);
}