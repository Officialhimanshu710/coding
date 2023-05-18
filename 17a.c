#include<stdio.h>
int main(){
    int n;
    int sum =0 , a;
    printf("enter the value of n = ");
    scanf("%d",&n);
    while(n>0){
       
        a=n%10;
        n=n/10; 
        sum = sum+a;
        
    }
     printf("sum = %d",sum);
     return 0;
}