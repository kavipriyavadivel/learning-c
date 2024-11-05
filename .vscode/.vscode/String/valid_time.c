#include<stdio.h>
#include<string.h>
int main(){
    char str[9];
    fgets(str,9,stdin);
    int count=0;
    str[strcspn(str,"\n")]='\0';
        if(str[0]=='0'){
            if(str[1]>='0'&&str[1]<='9'){
                if(str[2]==':')
                    count++;
            }
        }
        else if(str[0]=='1'){
            if(str[1]>='0'&&str[1]<='2'){
                if(str[2]==':')
                    count++;
            }
        }
        if((str[3]>='0'&&str[3]<='5')&&(str[6]>='0'&&str[6]<='5')){
            if(str[5]==':')
                if((str[4]>='0'&&str[4]<='9')&&(str[7]>='0'&&str[7]<='9'))
                    count++;
        }
    if(count==2){
        printf("Valid");
    }
    else{
        printf("Not valid");
    }
}