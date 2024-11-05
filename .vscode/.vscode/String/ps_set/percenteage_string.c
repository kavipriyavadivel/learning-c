#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
    char str[100],letter;
    fgets(str,100,stdin);
    scanf(" %c",&letter);
    str[strcspn(str,"\n")]='\0';
    int len=0,count=0;
    while(str[len]!='\0'){
        if(str[len]==letter){
            count++;
        }
        len++;
    }
    int percentage=((float)count/len)*100;
    printf("%d",percentage);
}