#include<stdio.h>  
 int main()    
{
    int n;
    printf("enter the value of n = ");
    scanf("%d",&n);
       int arr[n];
    for(int i=0;i<n;i++){
        printf("enter the value of arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
     for(int i=0;i<n;i++){
    if(arr[i]>arr[0]){
      arr[0] = arr[i];
    }
     }
     printf("the maximum no. is = %d",arr[0]);
    return 0;
}