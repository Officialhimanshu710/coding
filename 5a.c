#include<stdio.h>
int main(){
    int first , second, x;
    printf("enter first number = ");
    scanf("%d",&first);
    printf("enter second number = ");
    scanf("%d",&second);
    x = first;
    first = second ;
    second = x;
    printf("new first number is =%d\n ",first);

    printf("new second number is =%d ",second);
    return 0;

}