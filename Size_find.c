/*
Q: find size int,float,double and char using sizeof operator
Author: vrushti patel
Date:12/1/25
*/
#include <stdio.h>
int main()
{
    printf("size of int:%u bytes\n",sizeof(int));

    printf("size of float:%u bytes\n",sizeof(float));

    printf("size of double:%u bytes\n",sizeof(double));
    
    printf("size of char:%u bytes\n",sizeof(char));
    return 0;
}