#include<stdio.h>
int main(){
    int n,even=0,odd=0;
    printf("enter the n = ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    if(i%2==0){
       even  = even+i;
    }
   else{
    odd = odd +i;
   }
    }
    printf("sum of even is = %d\n",even);
  printf("sum of odd is = %d\n",odd);

}