#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

double binomialDistribution(int n, int x, double p, double q);
long int factorial(int n);

int main() {


    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n=6;
    int x=3;

    double p = 1.09/(1.09 + 1);
    double q = 1 - p;
    double ans = 0;
    for(int i = x; i <= n; i++){
        ans += binomialDistribution(n, i, p, q);
    }
    printf("%.3f", ans);
    return 0;

}



 long int factorial(int n){
        if(n>=1){
            return n*factorial(n-1);            
        }
        else{return 1;}
            }


double binomialDistribution(int n,int x, double p,double q){
    double tmp=factorial(n)/(factorial(x)*factorial(n-x));
    return tmp*pow(p,x)*pow(q,n-x);

}
