#include <stdio.h>
#include <stdbool.h>

int main(){
    int arr[5];

    for(int i=0;i<4;i++){
        scanf("%d",&arr[i]);
    }

    int target;
    printf("target=");
    scanf("%d",&target);

    bool f=false;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(arr[i]+arr[j]==target){
                f=true;
                printf("%d ",i);
                printf("%d",j);
                break;
            }
        }
        if(f==true){
            break;
        }
    }
    
}
