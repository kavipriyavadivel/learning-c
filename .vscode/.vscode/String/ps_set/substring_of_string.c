#include<stdio.h>
#include<string.h>
int main(){
    char str[100],rev[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i=0;
    int len=strlen(str);
    while(len>0){
        rev[i++]=str[--len];
    }
    rev[i]='\0';
    char word[2];
    int flag;
    for(int k=0;str[k]!='\0';k++){
        word[0]=str[k];
        word[1]=str[k+1];
        int index=0;
        flag=1;
        while(rev[index]!='\0'){
            if(rev[index]==word[0]){
                if(rev[index+1]==word[1]){
                    flag=0;
                    printf("True");
                    break;
                }
            }
            index++;
        }
        if(flag==0){
           break;
        }
    }
    if(flag==1){
        printf("False");
    }
}