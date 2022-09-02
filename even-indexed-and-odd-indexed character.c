#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,i,j=0,k=0;
    scanf("%d\n", &n);
    char str[n];
    scanf("%s\n",str);
    char seven[n/2];
    char sodd [n/2];
    for (i=0; i<n;i++){
      if(i%2==0){
          seven[j]=str[i];
          j+=1;
      }
      else{
          sodd[k]=str[i];
          k+=1;
      }
      }


    printf("%s  %s",seven,sodd);
    return 0;
}
