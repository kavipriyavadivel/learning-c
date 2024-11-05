#include<stdio.h>
#include<string.h>
int main(){
    char str[100],word[100];
    fgets(str,100,stdin);
    fgets(word,100,stdin);
    str[strcspn(str,"\n")]='\0';
    word[strcspn(word,"\n")]='\0';
    int i=0;
    int len=strlen(word);
    while(str[i]!='\0'){
        if(str[i]==word[0]){
            int j=0;
            int index=i,count=0;
            while(word[j]!='\0'){
                if(word[j]!=str[index])
                    break;
                count++;
                j++;
                index++;
            }
            if(count==len){
                printf("%d ",i);
            }
        }
        i++;
    }
}