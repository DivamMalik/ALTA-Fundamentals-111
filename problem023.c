#include <stdio.h>
void get_quotient_xnd_remainder(int x, int y, int *quotient, int *remainder) {
*quotient = x / y;
*remainder = x % y;
}
int main()
{
    int x = 12, y = 24;
    int q, r;
    get_quotient_xnd_remainder(x, y, &q, &r);
    printf("Quotient: %d, Remainder: %d\n", q, r);
    return 0;
}
