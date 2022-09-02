#include <stdio.h>
int main(int argc, char **argv){



printf("Hello world\n");

double x=7;
int  i=2;
int* y=&i;
double* z;
z=&x;
printf("%.3f\n%.3f\n",x/(*y),*z/3);
printf("%d \n%d\n%d\n%d\n",sizeof(z),sizeof(z+1),sizeof(int),sizeof(double));
printf("Adr_x=%d\nAdr_x+1%d\nAdr_y=%d\nAdr_y+1=%d\n",z,(z+1),(int)y,(int)(y+1));
return 0;

}