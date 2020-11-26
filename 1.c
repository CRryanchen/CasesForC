// 来源：https://www.jb51.net/article/137027.htm
/* 题目：有1、2、3、4个数字，能组成多少个互不相同
 *   且无重复数字的三位数
 */
#include <stdio.h>

int main(void)
{
    int bai,shi,ge;
    int cnt = 0;

    /* 1234可以填在百、十、个位上 */
    for ( bai = 1; bai < 5; bai++)
    {
        for ( shi = 1; shi < 5; shi++)
        {
            for ( ge = 1; ge < 5; ge++)
            {
                /* 排除出现重复数字的数 */
                if ((bai != shi) && (shi != ge) && (bai != ge))
                {
                    printf("%d%d%d\t", bai, shi, ge);
                    cnt++;
                }
            }
        }
    }
    printf("\n一共有%d个数\n", cnt);

    return 0;
}