#include<stdio.h>
int main(){
    int first,second,third;
     printf("enter first number = ");
    scanf("%d",&first);
    printf("enter second number = ");
    scanf("%d",&second);
    printf("enter third number = ");
    scanf("%d",&third);
    if(first>second && first>third){
        printf("first is greter no.");
        return 0;
    }
    if(second>first && second>third){
        printf("second is greater no.");
        return 0;
    }
    else{
        printf("third is greater");
        return 0;
    }
}