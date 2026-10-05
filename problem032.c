#include <stdio.h>

int main(){
    int array[6];
    int max = 0;
    int second_max = 0; 
    printf("Enter number :");
    for(int i=0;i<6;i++){
        scanf("%d",&array[i]);  
    }
    for(int i=0;i<6;i++){
        if(max<array[i]){
            second_max = max;
            max = array[i];
            
        }else if(second_max < array[i] && second_max != max){
            second_max = array[i];
            
        }
    }
    if(max>second_max){
        printf("Second largest no. : %d",second_max);
    }else{
        printf("-1");
    }
    return 0;
  
}
