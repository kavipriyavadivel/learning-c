#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str);
    int wordstart=len-1;
    int wordend=len-1;
    int j=0;
    while(wordstart>0){
        if(str[wordstart]==' '){
            int i=wordstart+1;
            for(i;i<=wordend;i++){
                rev[j++]=str[i];
            }
            wordend=wordstart-1;
            rev[j++]=' ';
        }
        wordstart--;
    }
    int k=0;
    while(k<=wordend){
        rev[j++]=str[k++];
    }
    rev[j]='\0';
    printf("%s",rev);
}