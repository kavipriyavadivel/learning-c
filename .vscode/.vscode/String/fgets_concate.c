#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    char str2[100];
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
    str1[strcspn(str1,"\n")]=' ';
    // int i=0;
    // while(str1[i]!='\0'){
    //     i++;
    // }
    // int j=0;
    // while(str2[j]!='\0'){
    //     str1[i++]=str2[j++];
    // }
    // str1[i]='\0';
    strcat(str1,str2);
    printf("%s",str1);
}