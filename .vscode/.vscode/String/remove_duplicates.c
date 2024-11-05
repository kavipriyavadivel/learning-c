#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i=0,j;
    int len=strlen(str);
    while(str[i]!='\0'){
        for(j=i+1;j<len;j++){
            if(str[i]==str[j]){
                for(int k=j;k<len;k++){
                    str[k]=str[k+1];
                }
                j--;
                len--;
            }
        }
        i++;
    }
    printf("%s",str);
}