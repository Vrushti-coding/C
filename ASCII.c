/*
Q: print ascii value
Author: vrushti patel
Date:12/1/25
*/
#include <stdio.h>
int main()
{
    char a;
    printf("Enter character:");
    scanf("%c", &a);
    printf("\nThe ASCII value of %c is %d", a, a);
    return 0;
}