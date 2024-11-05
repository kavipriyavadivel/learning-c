#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    fgets(str1,100,stdin);
    str1[strcspn(str1,"\n")]='\0';
    fgets(str2,100,stdin);
    str2[strcspn(str2,"\n")]='\0';
    int arr1[256]={0},arr2[256]={0};
    int flag=0;
    if(strlen(str1)!=strlen(str2)){
        flag=1;
        printf("Not isomorphic");
    }
    else{
        for(int i=0;i<strlen(str1);i++){
            if(arr1[(int)str1[i]]!=arr2[(int)str2[i]]){
                flag=1;
                printf("Not isomorphic!");
                break;
            }
            arr1[(int)str1[i]]++;
            arr2[(int)str2[i]]++;
        }
    }
    if(flag==0){
        printf("Isomorphic!");
    }
}