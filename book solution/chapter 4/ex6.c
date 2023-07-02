// sum of n term of 1/n.
#include <stdio.h>

int main()
{ 
    float n , sum , term ;
    sum = 0;
    int i  = 1;


    printf("enter value of n  : ");
    scanf("%f",&n);
    term =  1.0/n;

    while( i <= 1)
    {
         sum = sum +term;
         i ++ ;
    }
    printf(" sum : %f",sum);

    return 0;
}
