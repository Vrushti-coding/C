/*
Q: Calculate simple interest
Author: vrushti patel
Date:13/1/25
*/
#include <stdio.h>
int main()
{
    int p;
    float r, n, simple_interest;

    printf("Enter a loan amount:\n");
    scanf("%d", &p);

    printf("Enter rate:\n");
    scanf("%f", &r);

    printf("Enter time:\n");
    scanf("%f", &n);

    simple_interest = p * r * n / 100;

    printf("Simple interest:%f", simple_interest);
    return 0;
}