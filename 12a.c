#include<stdio.h>
int main(){
    int number,sum=0;
    printf("enter the number = ");
    scanf("%d",&number);
    for(int i=0;i<=number;i++){
    sum = sum + i;
    }
    printf("The sum is = %d",sum);
}