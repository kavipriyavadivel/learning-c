#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch>='0'&&ch<='9')
        printf("Yes");
    else
        printf("No");
    // if(isdigit(ch))
    //     printf("Yes");
    // else
    //     printf("No");
}