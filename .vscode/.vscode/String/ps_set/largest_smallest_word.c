#include<stdio.h>
#include<string.h>
int main(){
    char str[100],min_word[100],max_word[100];
    fgets(str,100,stdin);
    int min=100,max=0,start;
    str[strcspn(str,"\n")]='\0';
    int i=0;
    int count=0;
    while(str[i]!='\0'){
        while(str[i]==' '){
            i++;
        }
        if(str[i]!='\0'){
            start=i;
            count=0;
            while(str[i]!=' ' && str[i]!='\0'){
                count++;
                i++;
            }
            if(count<min){
                min=count;
                strncpy(min_word,str+start,min);
                min_word[count]='\0';
            }
            if(count>max){
                max=count;
                strncpy(max_word,str+start,max);
                max_word[count]='\0';
            }
        }
    }
    printf("%s %s",min_word,max_word);
}