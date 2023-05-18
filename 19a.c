#include<stdio.h>
#include<math.h>
int main(){
    int n,digit,sum,no;
    printf("enter the number betweeen 1 to 100 = ");
    scanf("%d",&n);
    int copy =no;
    while(n!=0){
        n=n/10;
        digit++;
    }
    n=copy;
    while(n!=0){
        int rem = n%10;
        int power = pow(rem,digit);
         sum = sum + power;
    }
    n=copy;
    if(sum == n){
        printf("it is an armstrong no. ");
    }
    else{
        printf("not an armstrong no. ");
    }
    return 0;
}