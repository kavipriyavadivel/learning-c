#include<stdio.h>
#include<string.h>
int main(){
    char str[100],remove;
    fgets(str,100,stdin);
    scanf("%c",&remove);
    str[strcspn(str,"\n")]='\0';
    int i=0;
    int len=strlen(str);
    while(str[i]!='\0'){
        if(str[i]==remove){
            for(int j=i;j<=len;j++){
                str[j]=str[j+1];
            }
            len--;
            i--;
        }
        i++;
    }
    printf("%s",str);
}