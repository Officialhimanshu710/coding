#include<iostream.h>
#include<conio.h>
using namespace std;

int main(){
    int A[100][100];
    int i,j;
    cin>>n;
    i=0;
    j=n-1;
    int x=1;
    while(x<=n*n){
        if(i==j){
            for(int a=0;a<n;a++){
                A[i][a]=x;
                x++;
    }
    break;}
    for(int a=0;a<n;a++){
        A[i][a]=x;
        x++;
    }
    for(int a=0;a<n;a++){
        A[j][a]=x;
        x++;
    }
    i++;
    j--;}
    

    return 0;

        }
    