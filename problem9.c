#include <stdio.h>
int main()
{
    float weight , height;
    scanf("%f %f",&weight , &height);
    float BMI = weight/(height*height);
    if (BMI < 18.5){
        printf("Underweight");
    }
    else if (BMI >= 18.5 && BMI <= 24.9){
        printf("Normal");
    }
    else {
        printf("Obese");
    }
}
