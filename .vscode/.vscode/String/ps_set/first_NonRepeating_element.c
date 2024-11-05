#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    int i=0,flag;
    int len=strlen(str);
    for(int i=0;i<len;i++){
        int count=0;
        flag=0;
        if(str[i]!='0'){
            for(int j=i+1;j<len;j++){
                if(str[i]==str[j]){
                    count++;
                    str[j]='0';
                }
            }
            if(count==0){
                flag=1;
                printf("%c is found at index %d.",str[i],i);
                break;
            }
        }
    }
    if(flag==0){
        printf("Not found");
    }
}