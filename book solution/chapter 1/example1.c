//find the average of three number taken as input from user.

#include<stdio.h>
int main()
{
    int num1,num2,num3;

    printf("Enter the first  number : \n");
    scanf("%d",&num1);
    printf("Enter the second  number : \n");
    scanf("%d",&num2);
    printf("Enter the third  number : \n");
    scanf("%d",&num3);

    int sum,average;
    sum = num1+num2+num3;
    average = sum/3;

    printf("Average of the given three number is %d", average);

    return 0 ;

}