#include<stdio.h>  
 int main()    
{    
int n, reverse=0, a;    
printf("enter the value of n = ");    
  scanf("%d", &n);    
  while(n!=0)    
  {    
     a=n%10;  
          n/=10;      
     reverse=reverse*10+a;    
  }    
  printf("Reverse is = %d",reverse);    
return 0;  
}   



