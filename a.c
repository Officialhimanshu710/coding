#include<stdio.h>
int main(){
   int Maths,Science,English,Hindi,sst,sum,percentage;
   printf("enter the Maths marks = ");
   scanf("%d",&Maths);
   printf("enter the English marks = ");
   scanf("%d",&English);
   printf("enter the Hindi marks = ");
   scanf("%d",&Hindi);
   printf("enter the sst marks = ");
   scanf("%d",&sst);
   printf("enter the Science marks = ");
   scanf("%d",&Science);
   sum = Maths+Science+English+Hindi+sst;
   printf("sum is = %d",sum);
   printf("\n");
   percentage = (Maths+Science+English+Hindi+sst)/5;
  printf("percentage is = %d",percentage);
   
    return 0;
}