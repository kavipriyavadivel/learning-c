#include<stdio.h>
#include<string.h>
int main(){
    char str[100],remove;
    fgets(str,100,stdin);
    scanf("%c",&remove);
    str[strcspn(str,"\n")]='\0';
    int i=0,index=0;
    int len=strlen(str);
    while(str[i]!='\0'){
        if(str[i]==remove){
            index=i;
        }
        i++;
    }
    for(int i=index;i<len;i++){
        str[i]=str[i+1];
    }
    printf("%s",str);
}