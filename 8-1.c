/*
 * ���ӡһ�����ұ߿�ʼ�ľžų˷���
 */
/* �����Ҫĳһ�в��ӿ�ʼ��ӡ������Ҫ�ÿո����ǰ����ַ� */

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