/* 题目︰企业发放的奖金根据利润提成。
 * 利润(I)低于或等于10万元时，奖金可提10%;
 * 利润高于10万元，低于20万元时，
 * 低于10万元的部分按10%提成，高于10万元的部分，可提成7.5%;
 * 20万到40万之间时，高于20万元的部分，可提成5%;
 * 40万到60万之间时高于40万元的部分， 可提成3%;
 * 60万到100万之间时，高于60万元的部分，可提成1.5%，
 * 高于100万元时，超过100万元的部分按1%提成，从键盘输入当月利润I，
 * 求应发放奖金总数
 */
#include <stdio.h>

int main(void)
{
    float I;
    float bonus;
    float bonus1;/**< 10万元收益 */
    float bonus2;/**< 20万元收益 */
    float bonus4;/**< 40万元收益 */
    float bonus6;/**< 60万元收益 */
    float bonus10;/**< 100万元收益 */

    printf("请输入您当月的利润： ");
    scanf("%f", &I);
    bonus1 = 100000 * 0.1;
    bonus2 = bonus1 + 100000 * 0.75;
    bonus4 = bonus2 + 200000 * 0.5;
    bonus6 = bonus4 + 200000 * 0.3;
    bonus10 = bonus6 + 400000 * 0.15;

    if (I <= 100000)
    {
        bonus = I * 0.1;
    }
    else if (I <= 200000)
    {
        bonus = bonus1 + (I - 100000) * 0.075;
    }
    else if (I <= 400000)
    {
        bonus = bonus2 + (I - 200000) * 0.05;
    }
    else if (I <= 600000)
    {
        bonus = bonus4 + (I - 400000) * 0.03;
    }
    else if (I <= 1000000)
    {
        bonus = bonus6 + (I - 600000) * 0.015;
    }
    else
    {
        bonus = bonus10 + (I - 1000000) * 0.01;
    }

    printf("bonus = %.2f\n", bonus);
}