#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    strlwr(str);
    int i=0;
    int len=0;
    while(str[len]!='\0'){
        len++;
    }
    int flag=1;
    len=len-1;
    while(i<len){
        if(str[i]!=str[len]){
            flag=0;
            break;
        }
        i++;
        len--;
    }
    if(flag){
        printf("%s is palindrome",str);
    }
    else{
        printf("%s not a palindrome",str);
    }
}