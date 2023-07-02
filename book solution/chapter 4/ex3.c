//wap employs different kinds of operators . the result of their evaaluation are also shown for comparision .
#include <stdio.h>

int main()
{ 
    int a,b,c,d;
    printf("enter the value of a ");    
    scanf("%d",&a);

    printf("enter the value of b "); 
    scanf("%d",&b);

    c = ++a + b;
    printf(" value of c is %d",c);

    d = a++ -b;
    printf("valuie of d is %d", d);

    return 0;
}
