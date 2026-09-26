#include <stdio.h>
void multiply(int  *num, int factor) {
    *num = (*num) * factor;
}
void pass(int num, int factor){
    num = num * factor;
}   
int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    pass(a,b);
    printf("pass the value:%d\n", a);
    multiply(&a, b);
    printf("multiply the value:%d\n", a);
}
