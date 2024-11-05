#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int from,to;
    scanf("%d %d",&from,&to);
    for(int i=from-1;i<to;i++){
        printf("%c",str[i]);
    }
}