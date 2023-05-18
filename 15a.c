#include<stdio.h>
int main(){
    int n;
    int t1 = 0, t2 = 1;
    int t3 = t1 +t2;
    printf("enter n = ");
    scanf("%d",&n);
    printf("series is = %d, %d, ",t1,t2);
    for(int i=2;i<n;i++){
    printf("%d, ",t3);
    t1=t2;
    t2=t3;
    t3 = t1 +t2;
    }
    return 0;
}