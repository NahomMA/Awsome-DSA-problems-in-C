#include <stdio.h>

void Double(int *A, int size){
    int i, sum=0;
    printf("SOE fun: sizeof(A)=%d   and sizeof(A[0]) =%d    \n\n",sizeof(A),sizeof(A[0]));
    // int size= sizeof(A)/sizeof(A[0]);
    for (i=0;i<size;i++){
        A[i]=2*A[i];
    }
   
}



int SumOfElements(int *A, int size){
    int i, sum=0;
    printf("SOE fun: sizeof(A)=%d   and sizeof(A[0]) =%d    \n\n",sizeof(A),sizeof(A[0]));
    // int size= sizeof(A)/sizeof(A[0]);
    for (i=0;i<size;i++){
        sum+=A[i];
    }
    return sum;
}

// int SumOfElements(int A[]);
// void inc(int *a );
int main()
 {
// int x=5;
// int* p;
// p=&x;
// *p=6;
// int** q=&p;
// int*** r=&q; 
// ***r=10;
// printf("Value of x = %d\n",x);
// printf("Value @ p = %d\n",*p);
// printf("Value @ q= %d\n",*q);
// printf("Value @ q= %d\n",*(*q));
// **q=*p+39;
// printf("Value of x = %d\n",x);
// printf("Value @ p = %d\n",*p);
// printf("Value @ q= %d\n",*q);
// printf("Value @ q= %d\n",*(*q));
// printf("Value @ r= %d\n",***r);

// int z=23;
// printf("%d \n",&z);
// inc(&z);
// printf("%d \n",z);

// abtarr();




// Array as function arguments
int A[]={1,2,3,4,5};

printf("Main fun: sizeof(A)=%d   and sizeof(A[0]) =%d  \n\n",sizeof(A),sizeof(A[0]));
int size= sizeof(A)/sizeof(A[0]);
int total =SumOfElements(A, size);
printf("Sum of elements = %d\n\n",total);



for (int i=0; i<size;i++){
    printf("%d ",A[i]);
    }
printf("\n");
Double(A,size);
for (int i=0; i<size;i++){
    printf("%d ",A[i]);
    }
return 0;
}

void inc(int *z ){
    *z=(*z)+2;  
    printf("%d \n",&z);  

}

void abtarr(){
    int A[]={2,4,5,8,11};
    int i;
    for (int i=0;i<5;i++){
        printf("Address = %d\n", &A[i]);
        printf("Address = %d\n", A+i);
        printf("Value = %d\n",A[i]);
        printf("Value = %d\n",*(A+i));
        printf("value = %d\n", *(&A[i]));

    } 
}

