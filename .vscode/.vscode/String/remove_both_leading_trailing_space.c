#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    printf("%d",strlen(str));
    int i=0,j=0,index=-1;
    while(str[i]==' '||str[i]=='\t'||str[i]=='\n'){
            i++;
    }
    while(str[i]!='\0'){
        str[j++]=str[i++];
    }
    str[j]='\0';
    while(str[i]!='\0'){
        if(str[i]!=' '&&str[i]!='\t'&&str[i]!='\n')
            index=i;
        i++;
    }
    str[index+1]='\0';
    printf("%s",str);
    printf("%d",strlen(str));
}