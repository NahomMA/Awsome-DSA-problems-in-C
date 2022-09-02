
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int isPrime(int x){
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
   
    if (x==2) return 1;
    if (x%2==0 && x!=2)return 0; //# checking even but not equal to 2
        
    if (x%3==0 && x!=3 || x==1)return 0;
        
    if (x%2==5 && x!=5)return 0 ; //# checking even but not equal to 5
        
    int flag=0 ;         //  # initializing the flag
    
   int  y=(int)floor(sqrt(x));// # geting the squre root of x
    for (int i=2;i<y+1;i++){
        if (x%i==0)   flag=1;}
    if (flag ==1) return 0;
    else return 1;   
    
}

int main() {
    int x;
    scanf("%d",&x);
    int A[x];

    for (int i=0;i<x;i++){
        scanf("%d",A+i);
    
    }

    for (int i=0;i<x;i++){
        if (isPrime(A[i])==1) printf("Prime\n");
        else printf("Not prime\n");
    
    
    }

    
   
   
   
   
    return 0;
}


