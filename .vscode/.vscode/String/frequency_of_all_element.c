// #include<stdio.h>
// #include<string.h>
// #include<limits.h>
// int main(){
//     char str[100];
//     int freq[26];
//     fgets(str,100,stdin);
//     for(int i=0;i<26;i++){
//         freq[i]=0;
//     }
//     int i=0;
//     while(str[i]!='\0'){
//         if(str[i]>='a'&&str[i]<='z'){
//             freq[str[i]-97]++;
//         }
//         if(str[i]>='A'&&str[i]<='Z'){
//             freq[str[i]-65]++;
//         }
//         i++;
//     }
//     for(int i=0;i<26;i++){
//         if(freq[i]!=0){
//             printf("%c : %d\n",(i+97),freq[i]);
//         }
//     }
// }
#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
    char str[100];
    int max_count=0,count;
    fgets(str,100,stdin);
    str[strcspn(str,"\n")]='\0';
    char max_ele=str[0];
    int i=0;
    while(str[i]!='\0'){
        count=1;
        int j=i+1;
        if(str[i]!='0'&&str[i]!=' '){
            while(str[j]!='\0'){
                if(str[i]==str[j]){
                    str[j]='0';
                    count++;
                }
                j++;
            }
            if (isalpha(str[i]))
                printf("%c : %d\n",str[i],count);
        }
        i++;
    }
}