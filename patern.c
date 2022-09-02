#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int min(int num1, int num2) 
{
    return (num1 > num2 ) ? num2 : num1;
}

int main() 
{

    int n;
    scanf("%d", &n);
   
  	
    int s =2*n-1;
    for (int i=0;i<s;i++){
        for (int j=0;j<s;j++){          
                 int tmp=i < j ? i : j;
                 tmp = tmp< s-i ? tmp : s-i-1;
                 tmp = tmp< s-j-1 ? tmp : s-j-1;
                 
                 printf("%d ",n-tmp);   
                    
           
              
              
              }
        printf("\n");



    }
    return 0;
}