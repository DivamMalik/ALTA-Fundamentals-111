#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    scanf("%s %s", s1, s2);
   if (strlen(s2) != strlen(s1)) {
        printf("false");
        return 0;
    }
    
    char temp[200];
    strcpy(temp, s1);
    strcat(temp, s1);
    
    if (strstr(temp, s2) != NULL) {
        printf("true");
    } else {
        printf("false");
    }
}
