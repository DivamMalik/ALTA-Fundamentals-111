#include <stdio.h>

int main(){
    int max = 0;
    int array[3];
    printf("Enter three no. : ");
    for(int i=0;i<3;i++){
        scanf("%d",&array[i]);
        if(max < array[i]){
            max = array[i];
        }
    }
    printf("Max value : %d",max);
    return 0;
}
