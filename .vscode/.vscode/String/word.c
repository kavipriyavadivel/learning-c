#include<stdio.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    char prev='\0';
    int i=0,count=0;
    while(str[i]!='\0'){
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t'){
            if(prev!=' '&&prev!='\0'&&prev!='\n'&&prev!='\t'){
                count++;
            }
        }
        prev=str[i];
        i++;
    }
    printf("%d",count);
}