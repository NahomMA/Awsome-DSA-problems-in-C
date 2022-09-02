#include <stdio.h>
 #include <stdlib.h>

struct comlx
{
   double rel;
   double imag;
};

struct complex {
    double r;
    double i;

} c2,c3,c4;


struct  {
    double r;
    double i;

} n1,n2;

// passsing structures as an arguement to functions
struct  point
{
    double x;
    double y;
} pt,pt1;



// passsing structures as an arguement to functions
// possible to have structure return type

struct point cpx_add(struct point p1, struct point p2){
    struct point sum;
    // struct point p= {1,2}; 
    
  
    printf("point_1-x: %f\n",p1.x);    
    sum.x= p1.x+p2.x;
    sum.y= p1.y+p2.y;
    printf(" The sum before is: %f\n",sum.x);
    return sum;

}





int main(){

struct comlx c1;
struct comlx c5;

// structure operations 
// Assign

c1=c5;
c1.imag=2;
c1.rel=10;
// printf("%f\n",c1.rel);
// printf("%f\n",c1.imag);

c1.imag=2.2;
c1.rel=10.01;
// printf("%f\n",c1.rel);
// printf("%f\n",c1.imag);

c2.r=1;
c2.i=4;

// printf("%f\n",c2.r);
// printf("%f\n",c2.i);

n1.i=10;
n1.r=222;

// printf("%f",n1.i);

struct point p={1,2};
pt.x=12;
pt.y=13;
pt1.x=13;
pt1.y=12;
struct point *ptr1,*ptr2;
ptr1=&pt;
ptr2=&pt1;
printf(" p_x before %f\n",p.x);
struct point result= cpx_add(*ptr1,*ptr2);
printf("Sum after is :%f\n",result.x);
printf(" sum after is: %f\n",result.y);
printf("%f \n",(*ptr1).x);
printf("%f\n",ptr1->x);


}


