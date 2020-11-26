/*
 * 像打印一个从右边开始的九九乘法表
 */
/* 如果需要某一行不从开始打印，必须要用空格填充前面的字符 */

#include <stdio.h>

int main(void)
{
    int i, j;

    for ( i = 1; i < 10; i++)
    {
        for ( j = 9; j > 0 ; j--)
        {
            if (i >= j)
            {
                printf("%d*%d=%2d\t", i, j, i * j);
            }
            else
            {
                printf("      \t", i, j, i * j);
            }
        }
        putchar('\n');
    }

    return 0;
}