/*
 * 题目：输入某年某月某日，判断这一天是这一年的第几天？
 */
#include <stdio.h>

int daysOfMonth(int whichYear, int whichMonth);
int isLeap(int whichYear);


int main(void)
{
    int year, month, day;
    int i;
    int sum = 0;
    printf("please input year, month, day: ");
    scanf("%d,%d,%d", &year, &month, &day);

    for ( i = 1; i < month; i++)
    {
        sum += daysOfMonth(year, i);
    }
    sum += day;
    printf("%d年%d月%d日是该年的第%d天\n", year, month, day, sum);

    return 0;
}

int daysOfMonth(int whichYear, int whichMonth)
{
    int days = 0;

    switch (whichMonth)
    {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            days = 31;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            days = 30;
            break;

        case 2:
            days = (isLeap(whichYear) ? 29 : 28);
            break;

        default:
            break;
    }

    return days;
}

int isLeap(int whichYear)
{
    if ((whichYear%400 == 0) || ((whichYear%4 == 0) && (whichYear%100) != 0))
    {
        return 1;
    }

    return 0;
}