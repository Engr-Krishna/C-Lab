/*2. WAP to compute the BMI Index of the person and print the BMI values as per the following ranges.
You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts).
	BMI
Starvation	<15
Anorexic	15.1 to 17.5
Underweight	17.6 to 18.5
Ideal	18.6 to 24.9
Overweight	25 to 25.9
Obese	30 to 39.9
Morbidity Obese	40.0 above*/


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