#include<stdio.h>\
void FuncA(int *A){ // Argument: 1-D Array of integers

}

void FuncB(int A[][3]){  // Argument: 2-D Array of integers

}

void FuncX(int A[][5]){  // Argument: 2-D Array of integers

}


void FuncC(int (*A)[2][2]){ // Argument: 3-D Array of integers

}

int main(){

    int A[2]={1,2};
    FuncA(A);

    // 2D arry and pointers

int B[2][3]={{1,2,3},{4,5,6}};
FuncA(B);    // Returns int(*)[3] pointer to on dimentional array
int X[4][5];
FuncA(X);    // Returns int(*)[5] pointer to on dimentional array


// printf("%d \n",B);
// printf("%d \n",B[0]);
// printf("%d \n",*B);
// printf("%d \n",&B[0][0]);
// printf("%d\n",*(*(B+0)+1));
// printf("%d\n",B[0][1]);
// printf("%d\n",*(B[0]+1));

//3D Array and Pointers
int C[3][2][2]={{{2,5},{7,9}},{{3,4},{6,1}},{{0,8},{11,13}}};

FuncA(C);    // Returns int(*)[2][2] pointer to 2-D dimentional array

printf("%d %d %d %d,%d \n",C,*C,C[0],C[0][0],&C[0][0]);
printf("%d\n",(C[0][0]+1));
printf("%d\n",(&C[0][0]+1));

printf("%d\n",*(C[0][0]+1));
printf("%d\n",(*C[0][0]+2));
printf("%d\n",*(&C[0][0]+1));





return 0;



}