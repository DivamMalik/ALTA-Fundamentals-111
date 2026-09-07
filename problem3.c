#include <stdio.h>
#include <stdbool.h>
int main()
{
    char input [5];
    scanf("%s", &input);
    bool res = (strcmp(input, "true")==0)|| (strcmp(input, "True")==0);
    printf("%s", res ? "on": "Off");
    res = !res;
    printf(", then %s", res ? "on": "off");
}
