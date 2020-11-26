/* 判断101-200素数
 * 方法：用一个数分别去除2到sqrt(这个数)，如果能被整除
 * 则表明此数不是素数，反之是素数
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
            printf("%d是素数\n", i);
        }
        isPrimeNum = 1;
    }
    
}