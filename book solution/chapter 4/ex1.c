//wap to convert the given number of days into months. 
#include <stdio.h>
int main ()
{
    int day , month;
    printf(" enter the number of days ");
    scanf("%d",&day);

    month = day /30;
    day = day%30;

    printf(" month : %d day : %d",month , day);
    return 0 ;

}