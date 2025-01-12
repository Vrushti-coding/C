/*
Q: check a numbers is prime or not
Author: vrushti patel
Date:9/1/25
prime means no not divide
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
*/

/*
Q: check a numbers is prime or not from 1 to N
Author: vrushti patel
Date:12/1/25
*/
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter a range(1to10):\n");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("Enter a valid range!!!");
        return 1;
    }
    printf("Prime number between %d and %d are:\n", a, b);
    for (int i = a; i <= b; i++)
    {
        int cnt = 0;
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                cnt++;
            }
        }
        if (cnt == 2)
        {
            printf("%d is prime no\n", i);
        }
    }
    return 0;
}