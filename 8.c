/* ��Ŀ�����9*9�ھ��� */

#include <stdio.h>

int main(void)
{
    int i, j;

    for ( i = 1; i < 10; i++)
    {
        for ( j = 1; j <= i ; j++)
        {
            printf("%d*%d=%2d\t", i, j, i * j);
        }
        putchar('\n');
    }
}