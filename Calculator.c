/*
Q: Make a simple calculator
Author: vrushti patel
Date:12/1/25
*/
#include <stdio.h>
#include <math.h>
#define max_history 100
int main()
{
    double a, b, result;
    int menu;
    char history[max_history][100];
    int history_count = 0;
    while (1)
    {
        printf("\n=== Simple Calculator ===\n");
        printf("1. Addition\n");
        printf("2. subtraction\n");
        printf("3. multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. AC to reset the calculator\n");
        printf("7. check history\n");
        printf("8. Exit\n\n");

        printf("Enter a choice(1-5):");
        scanf("%d", &menu);

        if (menu == 8)
        {
            printf("Exit a program. goodbye!!\n");
            break;
        }

        if (menu == 6)
        {
            printf("Calculator reset.\n");
            a = b = result = 0;
            history_count = 0;
            continue;
        }

        if (menu == 7)
        {
            printf("\n=== Calculation History ===\n");
            if (history_count == 0)
            {
                printf("No calculations yet.\n");
            }
            else
            {
                for (int i = 0; i < history_count; i++)
                {
                    printf("%d. %s\n", i + 1, history[i]);
                }
            }
            continue;
        }

        if (menu > 8 || menu < 1)
        {
            printf("Enter a valid number\n");
            continue;
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
            snprintf(history[history_count++], 100, "%.2f %s %.2f = %.2f", a, (menu == 1 ? "+" : menu == 2 ? "-" : menu == 3   ? "*" : menu == 4   ? "/" : "%"),b, result);
        }

        else
        {
            printf("Result:%.2f\n", result);
            snprintf(history[history_count++], 100, "%.2f %s %.2f = %.2f", a, (menu == 1 ? "+" : menu == 2 ? "-" : menu == 3   ? "*" : menu == 4   ? "/" : "%"),b, result);
        }
    }
    return 0;
}