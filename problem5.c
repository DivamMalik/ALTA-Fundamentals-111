#include <stdio.h>
#include <stdbool.h>
int main()
{
    int balance , amount;
    scanf("%d\n%d",&balance,&amount);
    bool widthdraw = (amount > 0) && (amount <= balance);
    printf("%s\n", widthdraw ? "True" : "False");
}
