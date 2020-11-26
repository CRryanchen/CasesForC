/*
 * 题目∶一个整数，它加上100后是一个完全平方数，
 * 再加上168又是一个完全平方数，请问该数是多少?
 */
#include <stdio.h>
#include <math.h>

#define MAX_VALUE       (1000000)

int main(void)
{
    int i = 0;
    double x, y;

    for ( i = 0; i < MAX_VALUE; i++)
    {
        x = sqrt(i + 100);
        y = sqrt(i + 168);
        if (((x * x) == (i + 100)) && ((y * y) == (i + 168)))
        {
            printf("%d满足要求\n", i);
        }
    }
}