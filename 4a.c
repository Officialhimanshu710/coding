#include<stdio.h>
int main(){
    int celcius; 
    float fah;
    printf("enter the temperature in c = ");
    scanf("%d",&celcius);
    fah=(1.8*celcius)+32;
    printf("fah is = %0.2f",fah);
    return 0;
}