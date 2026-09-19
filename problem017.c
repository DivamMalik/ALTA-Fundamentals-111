#include <stdio.h>
int main()
{
    int n;
    int a = 0, b=1;
    int res;
    scanf("%d",&n);
    for(int i = 0; i<n ; i++){
        printf("%d ",a);
        res = a + b;
        a = b;
        b = res;
    }
}
