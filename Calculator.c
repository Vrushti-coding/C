/*
Q: Make a simple calculator
Author: vrushti patel
Date:11/1/25
*/
#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, result;
    int menu;
    while (1)
    {
    menu:
        printf("\n=== Simple Calculator ===\n");
        printf("1. Addition\n");
        printf("2. subtraction\n");
        printf("3. multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n\n");

        printf("Enter a choice(1-5):");
        scanf("%d", &menu);

        if (menu == 6)
        {
            printf("Exit a program. goodbye!!\n");
            break;
        }

        if (menu > 6 || menu < 1)
        {
            printf("Enter a valid number\n");
            goto menu;
        }

        printf("Enter two number:");
        scanf("%lf %lf", &a, &b);
        printf("\n");

        switch (menu)
        {
        case 1:
            printf("You selected addition\n");
            result = a + b;
            break;
        case 2:
            printf("You selected subtraction\n");
            result = a - b;
            break;
        case 3:
            printf("You selected multiplication\n");
            result = a * b;
            break;
        case 4:
            if (b == 0)
            {
                printf("number is not divided to 0");
            }
            else
            {
                printf("You selected addition\n");
                result = a / b;
            }
            break;
        case 5:
            if (b == 0)
            {
                printf("number is not divided to 0");
            }
            else
            {
                printf("You selected modulus\n");
                result = fmod(a, b);
            }
            break;
        }
        if (a == (int)a && b == (int)b)
        {
            printf("Result:%.f\n", result);
        }
        else
        {
            printf("Result:%.2f\n", result);
        }
    }
    return 0;
}