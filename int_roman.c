#include<stdio.h>
int main(){
    int values[]={1000,900,500,400,100,90,50,40,10,9,5,4,1};
    char * roman[]={"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
   int n;
   scanf("%d",&n);
   for(int i=0;i<13;i++){
        while(n>=values[i]){
                printf("%s",roman[i]);
                n-=values[i];
        }
    }
    return 0;
} 
