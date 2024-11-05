#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    fgets(str,100,stdin);
    int i=0;
    int vowel=0,con=0;
    while(str[i]!='\0'){
        if(str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' || str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u')
            vowel++;
        else
            con++;
        i++;
    }
    printf("Vowels : %d\nConsonants : %d",vowel,con);
}