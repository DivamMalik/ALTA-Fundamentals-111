#include <stdio.h>

int main() {
    int arr[6];
    for(int i=0;i<6;i++){
        scanf("%d",&arr[i]);
    }
    int count = 0;
    int max_count = 0;
    for (int i = 0; i < 6; i++) {
        if (arr[i] == 1) {
            count++;
            if (count > max_count) {
                max_count = count;
            }
        } else {
            count = 0;
        }
    }
    printf("Max consecutive 1s are = %d\n", max_count);
    return 0;
}
