#include <stdio.h>
int main(){
    int array[9];
    for(int i=0;i<9;i++){
        array[i]= i+1;
        printf("%d ",array[i]);
        if((i+1)%3==0){
            printf("\n");
        }
    }
}
