#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(isxdigit(ch))
        printf("Yes");
    else
        printf("No");
}