#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i=0;
    while(str[i]!='\0'){
        if(isalpha(str[i])){
            for(int j=i;str[j]!='\0';j++){
                str[j]=str[j+1];
            }
        }
        else{
            i++;
        }
    }
    printf("%s",str);
}