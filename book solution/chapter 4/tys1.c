#include <stdio.h>

int main()
{ 
    char ch;
    int lowercase,uppercase ;

    printf("enter alphabets : ");
    scanf("%c",&ch);

    lowercase =  (ch  == 'a'|| ch == 'e' || ch == 'i' || ch == 'o'|| ch == 'u');
    uppercase =  (ch  == 'A'|| ch == 'E' || ch == 'I' || ch == 'O'|| ch == 'U');

    if( lowercase || uppercase)
    {
        printf(" the given alphabet  %d is vowel",ch);
    }
    else 
    {
        printf(" the given alphabets is %d consonants . ",ch );

    }
    return 0;
}
