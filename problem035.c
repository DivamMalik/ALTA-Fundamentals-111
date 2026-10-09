#include <stdio.h>

int main(){
    int arr[5],d;
    for(int i=0;i<5;i++){
        scanf("%d",&arr[i]);
    }
    printf("d= ");
    scanf("%d",&d);

    int temp;

    for (int i=0; i<d; i++){
        temp = arr[0];
            for (int j=0; j<5 - 1; j++){
                arr[j] = arr[j + 1];
            }
         arr[5 - 1] = temp;
    }

    printf("Rotated array: ");

    for (int i = 0; i<5; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}
