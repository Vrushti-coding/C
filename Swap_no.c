/*
Q: swap two number using temporary variable
Author: vrushti patel
Date:12/1/25
#include <stdio.h>
int main()
{
    int a = 5, b = 10, temp;
    temp = a;
    a = b;
    b = temp;
    printf("a = %d, b = %d", a, b);
    return 0;
}
*/

/*
Q: swap two number without temporary variable
Author: vrushti patel
Date:11/1/25
*/
#include <stdio.h>
int main()
{
    int a = 5, b = 10;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d, b = %d", a, b);
    return 0;
}