#include<stdio.h>
#include<string.h>
int main(){
    int num;
    scanf("%d",&num);
    char word[100][100];
    while(getchar()!='\n');
    for(int i=0;i<num;i++){
        fgets(word[i],100,stdin);
        word[i][strcspn(word[i],"\n")]='\0';
    }
    for(int i=1;i<num;i+=2){
        printf("%s\n",word[i]);
    }
}