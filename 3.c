/*
 * ��Ŀ��һ��������������100����һ����ȫƽ������
 * �ټ���168����һ����ȫƽ���������ʸ����Ƕ���?
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
            printf("%d����Ҫ��\n", i);
        }
    }
}