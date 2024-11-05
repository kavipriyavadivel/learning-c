#include<stdio.h>
#include<string.h>
#include<limits.h>
int main(){
    char str[100];
    int min_count=INT_MAX,count;
    fgets(str,100,stdin);
    char min_ele=str[0];
    int i=0;
    while(str[i]!='\0'){
        count=1;
        int j=i+1;
        while(str[j]!='\0'){
            if(str[i]==str[j]){
                count++;
            }
            j++;
        }
        if(count<=min_count){
            min_count=count;
            min_ele=str[i];
        }
        i++;
    }
    printf("Minimum character is %c = %d times",min_ele,min_count);
}