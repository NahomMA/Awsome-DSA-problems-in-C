#include<stdio.h>
#include<stdlib.h>
int total;

void dynamicMall(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int *A=(int*)malloc(n*sizeof(int));
    printf(" malloc before init");
    for (int i=0; i<n;i++){       
        printf(" %d  ",A[i]);
    }
    printf("\n");
    

    for (int i=0; i<n;i++){
        *(A+i)=3*i;
       
    }
    printf(" malloc aftr init,");

    for (int i=0; i<n;i++){       
        printf(" %d ",A[i]);
    }
}



void dynamicCall(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int *A=(int*)calloc(n,sizeof(int));
    printf("calloc before initilization");
    for (int i=0; i<n;i++){       
        printf(" %d ",A[i]);
    }
     printf("\n");
    
    for (int i=0; i<n;i++){
        *(A+i)=3*i;
       
    }
   printf("calloc after initilization");


    for (int i=0; i<n;i++){       
        printf(" %d ",A[i]);
    }
}

void dynamicFree(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int *A=(int*)malloc(n*sizeof(int));
    
    

    for (int i=0; i<n;i++){
        *(A+i)=3+i;
       
    }
    
    printf(" malloc before free");
    for (int i=0; i<n;i++){       
        printf(" %d  ",A[i]);
    }
    printf("\n");
    free(A);
    printf(" malloc aftr free,");

    for (int i=0; i<n;i++){       
        printf(" %d ",A[i]);
    }
}


void dynamicRealloc(){
    int n;
    printf("Enter the size of array\n");
    scanf("%d",&n);
    int *A=(int*)calloc(n,sizeof(int));
   
    
    for (int i=0; i<n;i++){
        *(A+i)=3*i;
       
    }
     printf("before Realloc");
    for (int i=0; i<n;i++){       
        printf(" %d ",A[i]);
    }
     printf("\n");
    int *B=(int*)realloc(A,2*n*sizeof(int));
    int *C=(int*)realloc(A,0); // Equivalent to free(A)
    int *D=(int*)realloc(NULL,2*n*sizeof(int)); // Equivalent to malloc
  
     printf(" after Reallock \n");


    for (int i=0; i<2*n;i++){       
        printf(" %d ",B[i]);
    }
    printf("\n");

    printf("Prev block address= %d, new address = %d \n",A,B); 

}




int Square(int x){
    return x*x;
}
int SquareOfSUm(int x, int y){
    int z=Square(x+y);
    return z;
} 

int main()
{
    int a=4,b=8;
    total=SquareOfSUm(a,b);
    printf("output = %d \n ", total);
    dynamicRealloc();
    // dynamicMall();
     
    // printf("\n");
    // dynamicCall();
    // dynamicFree();




}