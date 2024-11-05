#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i=0,j;
    while(str[i]!='\0'){
        if(!((str[i]>='a'&&str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))){
            for(j=i;str[j]!='\0';j++){
                str[j]=str[j+1];
            }
        }
        else
            i++;
    }
    printf("%s",str);
}