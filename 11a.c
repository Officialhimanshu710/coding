#include<stdio.h>
int main(){
    char sign;
    int a,b,ans;
    printf("enter your operator(+,-,/,*) ");
    scanf("%c",&sign);
    printf("enter the value of a = ");
    scanf("%d",&a);
     printf("enter the value of b = ");
    scanf("%d",&b);

    switch(sign){
        case '+': ans = a+b;
        printf("The sum is = %d ",ans);
        break;
         case '-': ans = a-b;
        printf("The difference is = %d ",ans);
        break;
         case '/': ans = a/b;
        printf("The divide is = %d ",ans);
        break;
         case '*': ans = a*b;
        printf("The product is = %d ",ans);
        break;
        default:printf("Invalid input");
        break;

    }
    return 0;
}