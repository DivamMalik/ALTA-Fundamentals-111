#include <stdio.h>
int main()
{
    double a , b;
    char c;
    scanf("%lf %lf %c", &a , &b , &c);
    switch(c){
        case('+'):
            printf("%.2lf",a+b);
            break ;
        case('-'):
            printf("%.2lf",a-b);
            break;
        case('*'):
            printf("%.2lf",a*b);
            break;
        case '/':
            if (b != 0) {
                printf("%.2f", a / b);
            } else {
                printf("Division by zero is not allowed.");
            }
            break;
    }
}
