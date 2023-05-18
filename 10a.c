#include<stdio.h>
int main(){
   int Maths,Science,English,Hindi,sst,percentage;
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
   percentage = (Maths+Science+English+Hindi+sst)/5;
  printf("percentage is = %d\n",percentage);
  if(percentage<=100&&percentage>90){
    printf("Grade A");
    return 0;
  }
    if(percentage<=90&&percentage>80){
    printf("Grade B");
    return 0;
  }
   if(percentage<=80&&percentage>=60){
    printf("Grade C");
    return 0;
  }
   else{
    printf("Grade D");
    return 0;
  }
 
    
}