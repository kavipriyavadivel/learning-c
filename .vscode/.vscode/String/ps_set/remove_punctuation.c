#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i=0;
    while(str[i]!='\0'){
        if((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z')||(str[i]>='0'&&str[i]<='9')||(str[i]==' ')||(str[i]=='\t')||str[i]=='\n')
            printf("%c",str[i]);
        i++;
    }
}