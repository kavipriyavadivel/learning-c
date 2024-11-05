#include<stdio.h>
#include<stdio.h>
int main(){
    char str[100],search;
    fgets(str,100,stdin);
    scanf("%c",&search);
    int i=0;
    int flag=0;
    while(str[i]!='\0'){
        if(str[i]==search){
            flag=1;
            printf("%c found at the index : %d\n",search,i);
        }
        i++;
    }
    if(flag==0){
        printf("%c not found");
    }
}