/*
Q: Make a simple calculator
Author: vrushti patel
Date:11/1/25
*/
#include <stdio.h>
int main()
{
    float a, b;
    int menu;
    while (1)
    {
        menu:
        printf("\n=== Simple Calculator ===\n");
        printf("1. Addition\n");
        printf("2. subtraction\n");
        printf("3. multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n\n");
        
        printf("Enter a choice(1-5):");
        scanf("%d", &menu);

        if (menu == 5)
        {
            printf("Exit a program. goodbye!!\n");
            break;
        }

        if (menu > 5 || menu < 1)
        {
            printf("Enter a valid number\n");
            goto menu;
        }

        printf("Enter two number:");
        scanf("%f %f", &a, &b);
        printf("\n");

        switch (menu)
        {
        case 1:
            printf("You selected addition\n");
            printf("%.2f + %.2f = %.2f", a, b, a + b);
            break;
        case 2:
            printf("You selected subtraction\n");
            printf("%.2f - %.2f = %.2f", a, b, a - b);
            break;
        case 3:
            printf("You selected multiplication\n");
            printf("%.2f * %.2f = %.2f", a, b, a * b);
            break;
        case 4:
            if (b == 0)
            {
                printf("number is not divided to 0");
            }
            else
            {
                printf("You selected addition\n");
                printf("%.2f / %.2f = %.2f", a, b, a / b);
            }
            break;
        }
    }
    return 0;
}