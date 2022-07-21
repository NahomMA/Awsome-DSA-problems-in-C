#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

/*

Objective
In this challenge, we practice calculating the mean, median, and mode. Check out the Tutorial tab for learning materials and an instructional video!

Task
Given an array, X, of N integers, calculate and print the respective mean, median, and mode on separate lines. If your array contains more than one modal value, choose the numerically smallest one.

Note: Other than the modal value (which will always be an integer), your answers should be in decimal form, rounded to a scale of 1 decimal place (i.e.,1.23 , 7.0 format).

*/







int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    int n;
    scanf("%d\n",&n);
    int arr[n];


    double sum=0.0;

    for (int i=0;i<n;i++){


        scanf("%d\n",&arr[i]);

        sum+=(double) arr[i];
        }
    printf("%.1lf\n",sum/(double)n);

    if(arr[n%2==0])
    {
       double median=((double)arr[n/2]+(double)arr[n/2-1])/2;
       printf("%.1lf\n", median);
       }


    else{
         printf("%d\n", arr[n/2]);
    }
    printf("%d\n",mode(n, arr));

    return 0;
}



int mode(int n, int arr[]){
    int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;

      for (j = 0; j < n; ++j) {
         if (arr[j] == arr[i])
         ++count;
      }

      if (count > maxCount ||arr[i]<maxValue) {
         maxCount = count;
         maxValue = arr[i];
      }
   }

   return maxValue;

}
