#include <stdio.h>
#include <string.h>

int main() {
    char S[101], remove;
    scanf("%s %c", S, &remove);
    int j = 0;
    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] != remove) {
            S[j] = S[i];
            j++;
        }
    }
    S[j] = '\0'; 
    printf("%s", S);
}
