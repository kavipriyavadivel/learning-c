#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a')
            str[i]='b';
        else if(str[i]=='t')
            str[i]='g';
        else if(str[i]>='0'&&str[i]<='9')
            str[i]='n';
        i++;
    }
    printf("%s",str);
}