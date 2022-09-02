#include<stdio.h>
#include<stdlib.h>
int Add(int a, int b)
{
    printf("Address of a in Add function is %d \n",&a );
    int c = a+b;
    return c;
}

 // stack memory

// int tmp;
// int *add(int *a, int* b)
// {
//     // a and b are pointer to integers local to Add

//     printf("Address of a in add function is same as in main check! %d \n",&a );
//     printf("value at address stored in a of add = %d  is the same as value of a in main",*a);
//     tmp = (*a)+(*b);
//     return &tmp;
// }

// Heap memory
int *addMalloc(int *a, int* b)
{
    // a and b are pointer to integers local to Add

    printf("Address of a in add function is same as in main check! %d \n",&a );
    printf("value at address stored in a of add = %d  is the same as value of a in main",*a);
   int* e =(int*)malloc(sizeof(int));
   *e= (*a)+(*b);
    return e;
}



int main ()
{
int a=2, b=4;
printf("Address of a in main fun is %d \n",&a);
// call by value stack memory 
// int c=Add(a,b); 
                  /* value in a of main is copied to a of Add
                  value in b of main is copied to b of Add
                  */ 
// printf(" Call by value: Sum = %d \n",c);

// call by reference stack memory
//int *d=add(&a,&b); 
                /* value in a of main is copied to a of Add
                  value in b of main is copied to b of Add
                  */                  
                   
//printf(" call by reference: Sum = %d \n",*d);



// call by reference heap memory
int *f=addMalloc(&a,&b);     
                                /* value in a of main is copied to a of Add
                                value in b of main is copied to b of Add
                                */  

printf("call by ref heap/malloc Sum= %d ",*f);

}