/* �ж�101-200����
 * ��������һ�����ֱ�ȥ��2��sqrt(�����)������ܱ�����
 * ���������������������֮������
 */
#include <stdio.h>

int main(void)
{
    int i;
    int j;
    int isPrimeNum = 1;

    for ( i = 101; i < 200; i++)
    {
        for ( j = 2; j <= sqrt(i); j++)
        {
            if (i % j == 0)
            {
                isPrimeNum = 0;
                break;
            }
        }
        if (isPrimeNum)
        {
            printf("%d������\n", i);
        }
        isPrimeNum = 1;
    }
    
}