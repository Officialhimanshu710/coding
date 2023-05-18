#include<stdio.h>
int main(){
    int radius ;
    float area , circumference;
    printf("enter the radius = ");
    scanf("%d",&radius);
    area = 3.14*radius*radius;
    printf("area is = %0.2f",area);
    printf("\n");
    circumference = 2*3.14*radius;
     printf("circumference is = %0.2f",circumference);
    return 0;
}