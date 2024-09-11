 #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//        int n;
//     scanf("%d",&n);
//       int arr[n];
//     for(int i=0;i<n;i++){
//         scanf("%d",&arr[i]);
//     }
//     int rev[n];
//     int j=0;
//    for(int i=n-1;i>=0;i--){
//         rev[j]=arr[i];
//         j++;
//    }
//    for(int i=0;i<n;i++){
//    printf("%d",rev[i]);
//    }
//     return 0;
// }

//  prime number
// int main(){
//   int n;
//   int i;
//   scanf("%d",&n);
//   for(int i=2;i<n;i++){
//     if(n%i==0){
//       printf("non prime");
//       break;
//     }
//      else if( i =n){
//     printf("prime");
//   }
// }
//}


// pattern printing

// #include<stdio.h>
// int main()
// {
//   int n;
//   scanf("%d",&n);
//   int m=1;
//   for(int i=1;i<=n;i++){
//     for(int j=1;j<=m;j++){
//      printf("*");
   
//     }
//     printf("\n");
//     m=m+1;
    
//   }
//   return 0;
// }

// Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//    int n;
//    scanf("%d",&n);
//    int arr[n];
//    for(int i=0;i<n;i++){
//    scanf("%d",&arr[i]);
//    }
//    for(int i=0;i<n;i++){
    
//     if(arr[i]<=33){
//         printf("%d \n",arr[i]);
//     }
//     else{
//         int u=arr[i]/5;
//         int v=(u+1)*5;
//         if(v-arr[i]<3){
//             printf("%d \n",v);
//         }
//         else{
//             printf("%d \n",arr[i]);
//         }
//     }
//    }
  

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     // Write C code here
//    int n;
//    int arr[n];
//    scanf("%d",&n);
//      int k;
//    scanf("%d",&k);
//    for(int i=0;i<n;i++){
//        scanf("%d",&arr[i]);
//    }
//    int count;
//    for(int i=0;i<n;i++){
//        int sum=arr[i]+arr[i+1];
//        if(sum%k==0){
//            count++;
//        }
//    }
//    printf("%d",count);
   

//     return 0;
// }
#include <stdio.h>

int main() {
    // Write C code here
   int n;
   scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   int sum;
    int k;
   scanf("%d",&k);
   int count=0;
   for(int i=0;i<n-1;i++)
   {
    for(int j=i+1;j<n;j++){
        sum=arr[i]+arr[j];
        if(sum%k==0){
           count++;
       }
    }
   }
   
   printf("%d",count);

   

    return 0;
}