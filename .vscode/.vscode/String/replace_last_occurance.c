#include<stdio.h>
#include<string.h>
int main(){
    char str[100],replace_char,replace;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    scanf("%c ",&replace);
    scanf("%c",&replace_char);
    int i=0,index;
    while(str[i]!='\0'){
        if(str[i]==replace_char){
            index=i;
        }
        i++;
    }
    str[index]=replace;
    printf("%s",str);
}