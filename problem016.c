#include <stdio.h>
int main()
{
    int n;
    int res = 0;
    scanf("%d",&n);
    int a = n;
    while(n>0){
        res = res*10 + n%10;
        n/=10;
    }
    if (res == a){  
        printf("Palindrome");
    }
    else{
        printf("Not a Palindrome");
    }
}
