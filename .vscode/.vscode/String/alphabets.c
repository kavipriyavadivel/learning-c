#include<stdio.h>
#include<string.h>
int main(){
    char str1[100];
    fgets(str1,100,stdin);
    int i=0;
    int alpha=0,digit=0,special=0;
    while(str1[i]!='\0'){
        if((str1[i]>='a' && str1[i]<='z')||(str1[i]>='A' && str1[i]<='Z')){
            alpha++;
        }
        else if(str1[i]>='0'&&str1[i]<='9'){
            digit++;
        }
        else if(str1[i]!='\n' && str1[i]!=' '){
            special++;
        }
        i++;
    }
    printf("Alphabets : %d\nDigits : %d\nSpecial : %d",alpha,digit,special);
}