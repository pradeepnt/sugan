#include<stdio.h>

void main(){
   int num,sum=0;
   scanf("%d",&num);
   for(int i=1;i<=num;i++){
       sum=sum+i;
   }
   printf("sum of first %d natural numbers: %d",num,sum);
}
