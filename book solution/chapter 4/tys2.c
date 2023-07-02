// wap to print quadratic equation . d = -b^2+_4ac/2a
#include <stdio.h>
#include <math.h>
int main ()
{
    float a ,b,c,d,root1,root2;

    printf("enter the value of a, b,c is : ");
    scanf("%f%f%f",&a,&b,&c);

     d = b * b - 4 * a * c; 

     if (d<0)
     {
        printf("\n roots are imaginary.");
     }
     else {
        root1 = ((- b + sqrt(d))/2*a);
        root2 = ((- b  - sqrt(d))/2*a);

        printf(" roots are : %f and %f  " ,root1 , root2);

     }

    return 0 ;
}