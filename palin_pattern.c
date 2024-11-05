#include <stdio.h>

int main() {
   int num,n=1,i,j,p;
   scanf("%d",&num);
   if(num<=0)
   printf("Invalid");
   else
   {
       for(int i=1;i<=num;i++)
       {
           for(int j=1;j<=i;j++)
           {
               printf("%d ",n);
               n++;
           }
           p=n;
           for(int k=1;k<=i-1;k++){
               printf("%d ",p-2);
               p--;
           }
           printf("\n");
       }
   }
}