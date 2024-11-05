#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int len=strlen(str);
    int count=0;
    for(int i=0;i<len;i++){
        count=0;
        for(int j=0;j<len;j++){
            if(str[i]==str[j])
                count++;
        }
        if(count==1){
            printf("%c",str[i]);
            break;
        }
    }
}