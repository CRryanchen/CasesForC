// ��Դ��https://www.jb51.net/article/137027.htm
/* ��Ŀ����1��2��3��4�����֣�����ɶ��ٸ�������ͬ
 *   �����ظ����ֵ���λ��
 */
#include <stdio.h>

int main(void)
{
    int bai,shi,ge;
    int cnt = 0;

    /* 1234�������ڰ١�ʮ����λ�� */
    for ( bai = 1; bai < 5; bai++)
    {
        for ( shi = 1; shi < 5; shi++)
        {
            for ( ge = 1; ge < 5; ge++)
            {
                /* �ų������ظ����ֵ��� */
                if ((bai != shi) && (shi != ge) && (bai != ge))
                {
                    printf("%d%d%d\t", bai, shi, ge);
                    cnt++;
                }
            }
        }
    }
    printf("\nһ����%d����\n", cnt);

    return 0;
}