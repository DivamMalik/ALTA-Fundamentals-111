# include <stdio.h>
int main(){
    int array[5];
    printf("Enter number: ");
    for(int i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    int read,change,change_to;
    printf("Read index: ");
    scanf("%d",&read);
    printf("Change index:");
    scanf("%d %d",&change,&change_to);
    array[change]=change_to;

    printf("Read : %d\n",array[read]);
    printf("Updated Array: ");
    for(int i=0;i<5;i++){
        printf("%d ",array[i]);
    }
	return 0;
}
