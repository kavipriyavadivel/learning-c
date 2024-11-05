#include<stdio.h>
#include<string.h>
int main(){
    char str[100],toRemove[100];
    fgets(str,100,stdin);
    fgets(toRemove,100,stdin);
    str[strcspn(str,"\n")]='\0';
    toRemove[strcspn(toRemove,"\n")]='\0';
    int i, j;
    int len, removeLen;
    int found = 0,index=-1;
    len = strlen(str);
    removeLen = strlen(toRemove);
    for(i=0; i<len; i++)
    {
        found = 1;
        for(j=0; j<removeLen; j++)
        {
            if(str[i+j] != toRemove[j])
            {
                found = 0;
                break;
            }
        }
        if(found == 1)
        {
            index=i;
        }
    }
    if(index!=-1)
        {
            for(j=index; j<=len-removeLen; j++)
            {
                str[j] = str[j + removeLen];
            }
        }
    printf("%s",str);
}