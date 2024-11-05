#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int max_count=0,count;
    fgets(str,100,stdin);
    char max_ele=str[0];
    int i=0;
    while(str[i]!='\0'){
        count=0;
        int j=0;
        while(str[j]!='\0'){
            if(str[i]==str[j]){
                count++;
            }
            j++;
        }
        if(count>max_count){
            max_count=count;
            max_ele=str[i];
        }
        i++;
    }
    printf("Maximum character is %c = %d times",max_ele,max_count);
}