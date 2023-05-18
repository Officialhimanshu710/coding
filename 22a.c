#include<stdio.h>  
 int main()    
{
    int n,sum[n];
    printf("enter the value of n = ");
    scanf("%d",&n);
    int arr[n],arr2[n];
    for(int i=0;i<n;i++){
         printf("enter the values of arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
         printf("enter the arr2[%d] = ",i);
        scanf("%d",&arr2[i]);
    }
     for(int i = 0;i<n;i++){
    sum[i] = arr[i]+arr2[i];
    
    }
     
     for(int i=0;i<n;i++){
        printf("\nsum[%d] = %d",i,sum[i]);
     }
    
    return 0;
    }