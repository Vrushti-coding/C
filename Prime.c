/*
Q: check a numbers is prime or not
Author: vrushti patel
Date:9/1/25
*/
/*prime means no not divide*/
#include <stdio.h>
int main()
{
    int a, cnt = 0;
    printf("Enter a number:");
    scanf("%d", &a);
    if (a <= 1)
    {
        printf("%d is not prime no", a);
    }
    else
    {
        for (int i = 1; i <= a; i++)
        {
            if (a % i == 0)
            {
                cnt++;
            }
        }
    }
    if (cnt > 2)
    {
        printf("%d is not prime no", a);
    }
    else
    {
        printf("%d is prime no", a);
    }
    return 0;
}