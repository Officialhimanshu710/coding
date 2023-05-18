#include<stdio.h>
int main(){
    int p , r , t , si, ci;
    printf("enter the amount(p) = ");
    scanf("%d",&p);
     printf("enter the rate(r) = ");
     scanf("%d",&r);
     printf("enter the time(t) in year = ");
     scanf("%d",&t);
     si = (p*r*t)/100;
     printf("si is = %d",si);
     printf("\n");
     ci=((p*(1+r)^t)-p);
     printf("ci = %d",ci);
     return 0;
}