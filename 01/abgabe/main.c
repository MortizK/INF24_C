#include <stdio.h>
#include <math.h>

#define BIAS 127

float calcFloat(int sign, float mant, int expo)
{
    // Hat den Spirit, aber nicht korrekt, da mant und expo Binär sein müssten.
    float result = (float)pow(-1, sign);
    result *= (1 + mant);
    result *= (float)pow(2, expo - BIAS);

    return result;
}

int main(void)
{
    printf("This is the main()\n");

    int input1, input2;
    printf("Can you Input an Integer: ");
    int result = scanf("%d %d", &input1, &input2);

    printf("\nscanf() returned: %d\n", result);
    printf("I wrote: %d %d\n", input1, input2);

    printf("Input the 3 Parts of the IEEE764 Float\nint 0/1 | float 0.xx | int exponent: ");
    int sign, expo;
    float mant;
    scanf("%d %f %d", &sign, &mant, &expo);

    printf("The Resulting float will be: %f", calcFloat(sign, mant, expo));
}