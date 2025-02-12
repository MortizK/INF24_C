#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

void printArray(int *array, int n, int x, int y, int p)
{
    for (int i = 0; i < n; i++)
    {
        if (i == x || i == y)
            printf("\x1b[33m%d\x1b[0m ", array[i]);
        else if (i == p)
            printf("\x1b[32m%d\x1b[0m ", array[i]);
        else
            printf("%d ", array[i]);
    }
    printf("\n");
}

void swap(int *array, int x, int y, int p, int n)
{
    int temp = array[x];
    array[x] = array[y];
    array[y] = temp;

    printArray(array, n, x, y, p);
}

int partition(int *array, int left, int right, int n)
{
    const int pivot = array[right];
    int i = left - 1;

    for (int j = left; j < right; j++)
    {
        if (array[j] <= pivot && j - 1 > i)
        {
            // Needs to be before the swap
            i++;
            swap(array, j, i, right, n);
        }
    }
    // else this will reswap those who neede to swap
    swap(array, i + 1, right, right, n);
    return i + 1;
}

void quickSort(int *array, int left, int right, int n)
{
    if (left < right)
    {
        int middle = partition(array, left, right, n);

        quickSort(array, left, middle - 1, n);
        quickSort(array, middle + 1, right, n);
    }
}

int main(int argc, char *argv[])
{
    const int n = argc >= 2 ? atoi(argv[1]) : 10;

    int *array = NULL;
    array = calloc((size_t)n, sizeof(int));

    int value = 1321;
    for (int i = 0; i < n; i++)
    {
        value += 12763;
        value %= n;
        array[i] = value;
    }

    printArray(array, n, -1, -1, n - 1);

    quickSort(array, 0, n - 1, n);

    return 0;
}