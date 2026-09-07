#include <stdio.h>
int main()
{
    int days;
    scanf("%d",&days);
    int years = days/365;
    int left_days = days% 365;
    printf("%d years,%d days", years ,left_days);
}
