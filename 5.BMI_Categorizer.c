#include <stdio.h>

int main(void) {
    float weight, height, bmi;

    printf("Enter weight (kg): ");
    scanf("%f", &weight);

    printf("Enter height (m): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("BMI: %.2f\n", bmi);

    if (bmi < 18.5) {
        printf("Category: Underweight\n");
    } else if (bmi < 25.0) {
        printf("Category: Normal\n");
    } else if (bmi < 30.0) {
        printf("Category: Overweight\n");
    } else {
        printf("Category: Obese\n");
    }

    return 0;
}
