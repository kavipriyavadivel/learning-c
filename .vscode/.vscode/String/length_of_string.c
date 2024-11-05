#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int count=0;
    // int i=0;
    // while(str[i]!='\0'){
    //     count++;
    //     i++;
    // }
    count=strlen(str);
    printf("%d",count-1);
}