#include <stdio.h>
int main()
{
    long long a , b ,c ;
    long long max;
    scanf("%lld %lld %lld",&a , &b , &c);
    if ( a > b & a > c){
        max = a;
        printf("%lld",max);
    }
    if ( b > a & b > c){
        max = b;
        printf("%lld",max);
    }
    if ( c > b & c > a){
        max = c;
        printf("%lld",max);
    }
}
