#include <stdio.h>

int main()
{

    float num1, num2, num3, sum, average;

    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);
    printf("Enter the third number: ");
    scanf("%f", &num3);

    printf("The first number is: %.2f\n", num1);
    printf("The second number is: %.2f\n", num2);
    printf("The third number is: %.2f\n", num3);

    sum = num1 + num2 + num3;
    printf("The sum of the three numbers is: %.2f\n", sum);

    average = sum / 3;
    printf("The average of the three numbers is: %.2f\n", average);
  return 0;
}
