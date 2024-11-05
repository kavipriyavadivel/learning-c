#include<stdio.h>
#include<string.h>
int main(){
    char str[9];
    fgets(str,9,stdin);
    str[strcspn(str,"\n")]='\0';
    int i=0;
    if(str[0]!='0'){
        printf("Hours : %c%c ",str[0],str[1]);
    }
    else{
        printf("Hours :%c ",str[1]);
    }
    if(str[3]!='0'){
        printf("Minutes :%c%C ",str[3],str[4]);
    }
    else{
        printf("Minutes :%c ",str[4]);
    }
    if(str[6]!='0'){
        printf("Seconds :%c%C ",str[6],str[7]);
    }
    else{
        printf("Seconds :%c ",str[7]);
    }
}