#include<stdio.h>
#include<string.h>
int main(){
    char str[100],new[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i=0,j=0;
    while(str[i]!='\0'){
        if(str[i]==' '){
            new[j]=' ';
            j++;
        }
        while(str[i]==' '){
            i++;
        }
        new[j++]=str[i++];
    }
    printf("%s",new);
}