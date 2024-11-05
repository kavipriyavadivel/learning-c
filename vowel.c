#include<stdio.h>
int main(){
    char s[9];
    int count;
    for(int i=0;i<9;i++){
        scanf("%c",&s[i]);
    }
    for(int j=0;j<9;j++){
        char ch=s[j];
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
            count++;
        }
    }
    printf("Vowels = %d",count);
}