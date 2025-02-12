#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

int calcSum(int count, ...)
{
    va_list args;
    va_start(args, count);

    int sum = 0;

    for (int i = 0; i < count; i++)
    {
        sum += va_arg(args, int);
    }

    va_end(args);

    printf("The sum is: %d\n", sum);

    return sum;
}

int main(int argc, char *argv[])
{
    for (int i = 0; i < argc; i++)
    {
        printf("%d: %s\n", i, argv[i]);
    }

    // Intitilise all as 0
    int numbers[5] = {0};

    // Parsing
    for (int i = 0; i < argc - 1 && i < 5; i++)
    {
        numbers[i] = atoi(argv[i + 1]);
        printf("%d ", numbers[i]);
    }
    printf("\n");

    calcSum(5, numbers[0], numbers[1], numbers[2], numbers[3], numbers[4]);

    calcSum(2, numbers[1], numbers[3]);

    calcSum(3, numbers[0], numbers[2], numbers[4]);

    return 0;
}