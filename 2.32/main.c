#include <stdio.h>

int main(void) {
    float weight, height, bmi;

    printf("請輸入體重 (公斤 kg): ");
    scanf("%f", &weight);
    printf("請輸入身高 (公尺 m，例如 175 公分請輸入 1.75): ");
    scanf("%f", &height);

    bmi = weight / (height * height);

    printf("\n您的 BMI 為: %.1f\n\n", bmi);

    printf("BMI VALUES\n");
    printf("Underweight: less than 18.5\n");
    printf("Normal:      between 18.5 and 24.9\n");
    printf("Overweight:  between 25 and 29.9\n");
    printf("Obese:       30 or greater\n");

    return 0;
}