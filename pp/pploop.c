#include <stdio.h>
int main()
{
    // for (int i = 1; i <= 5; ++i)
    // {
    //     printf("%d%d\n", i, i);
    // }
    // printf("i++\n");

    // for (int i = 1; i <= 5; i++)
    // {
    //     printf("%d%d\n", i, i);
    // }
    // printf("i++\n");
    // for (int i = 5; i >= 0; i--)
    // {
    //     printf("%d%d \n", i, i);
    // }
    // for (int i = 5; i >= 1; i--)
    // {
    //     printf("%d%d \n", i, i);
    // }

    // int a = 6;
    // int b = 4;

    // int c = a+(-b);
    // printf("%d",c);

    // for(int i = 10;i>=1;i--)
    // {
    //     for(int j=i;j>=10;--j)
    //     {
    //         printf("%d",i);

    //     }

    // }

    int i = 0, j = 1;
    while (i < 3)
    {
        while (j <= 3)
        {
            //printf("%d", j++);
        }
        printf("%d%d", i++,j++);
        printf("\n");
    }
}