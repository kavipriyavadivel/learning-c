#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str);
    for(int i=0;i<len;i++){
        for(int j=i+1;j<len;j++){
            if(str[i]==str[j]){
                str[j]='\0';
            }
        }
    }
    for(int i=0;i<len;i++){
        if(str[i]!='\0'){
            printf("%c",str[i]);
        }
    }
}