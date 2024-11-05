#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char s[300];
    int size,count=0;
    fgets(s,300,stdin);
    size=strlen(s);
    for(int i=0;i<size;i++){
        s[i]=tolower(s[i]);
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
            count++;
        }
    }
    printf("Vowels = %d",count);
    return 0;
}