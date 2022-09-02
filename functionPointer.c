#include<stdio.h>
#include<stdlib.h>


// function pointers in C/C++

int Add(int a, int b){

    return a+b;
}





int main()
{
    int c;
    int (*p)(int,int);
    // p=&Add;
    // c=(*p)(2,3); // de-referrencing and excuting the function
    // printf("%d",c);


    // Or

    p=Add;
    c=p(2,3); // de-referrencing and excuting the function
    printf("%d",c);


    return 0;
}