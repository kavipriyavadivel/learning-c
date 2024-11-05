#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    fgets(str1,100,stdin);
    fgets(str2,100,stdin);
    int res=strcmp(str1,str2);
    if(res==0){
        printf("Equal");
    }
    else if(res==-1){
        printf("Smaller");
    }
    else{
        printf("Greater");
    }
}