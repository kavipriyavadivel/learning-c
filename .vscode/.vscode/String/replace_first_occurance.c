#include<stdio.h>
#include<string.h>
int main(){
    char str[100],replace_char,replace;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    scanf("%c ",&replace);
    scanf("%c",&replace_char);
    int i=0;
    while(str[i]!='\0'){
        if(str[i]==replace_char){
            str[i]=replace;
            break;
        }
        i++;
    }
    printf("%s",str);
}