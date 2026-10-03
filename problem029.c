#include <stdio.h>
#include <math.h>
struct point{
    float x,y;
};
float distance(struct point a, struct point b);
int main(){
    struct point a,b;
    printf("Distance Caluculator between two points\n");
    printf("\nEnter starting point coordinates :");
    scanf("%f %f",&a.x,&a.y);
    printf("Enter ending point coordinates : ");
    scanf("%f %f",&b.x,&b.y);
    printf("Distance between two points: %.2f\n",distance(a,b)); 
}
float distance(struct point a, struct point b){
    return sqrt(pow((b.x-a.x),2) + pow((b.y-a.y),2));
    
}
