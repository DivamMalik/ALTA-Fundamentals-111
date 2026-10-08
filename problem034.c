#include <stdio.h>
int main(){
    int array[6];
    int reverse_array[6];
    for(int i=0;i<6;i++){
        scanf("%d",&array[i]);
    }
    for(int i=0;i<5;i++){
        int temp = array[i];
        reverse_array[i] = array[5-i];
        reverse_array[5-i] = temp;
    }
    for(int i=0;i<6;i++){
        printf("%d ",reverse_array[i]);
    }
    return 0;
}
