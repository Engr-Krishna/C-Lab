#include <stdio.h>

int main() {
    float weight, height, bmi;

    printf("Enter your weight in kgs: ");
    scanf("%f", &weight);

    printf("Enter your height in meters: ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    if (0< bmi < 15)
        printf("Starvation\n");
    else if (bmi > 15.1 && bmi < 17.5)
        printf("Anorexic\n");
    else
        printf("Underweight\n");

    return 0;
}