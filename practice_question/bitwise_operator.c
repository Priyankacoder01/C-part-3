#include <stdio.h>
int main(){
    int a ;
    printf("enter the number : ");
    scanf("%d",&a);
    int b,c,d,e,f,n;
    b = (a+1)<<2;
    c = (a+2)>>1;
    d = ~(a+3);
    // 2`s complement  = ~
     e = ~13;
 //  f = -(~(~13+1));
 f = - (n + 1);

    printf("b = %d \n",b);
    printf("c = %d\n",c);
    printf("d = %d\n",d);
    printf("f = %d\n",f);
    printf("e = %d\n",e);
    return 0 ;

}