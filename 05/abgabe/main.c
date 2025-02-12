#include <stdio.h>

int main()
{
    FILE *stream;
    stream = fopen("text.txt", "r+");

    char string[100];

    // Gängiger read file loop
    while (!feof(stream))
    {
        if (fscanf(stream, "%s", string))
            printf("%s\n", string);
    }

    int written = fputs("\nIch bin Muede", stream);

    printf("Es wurden %d chars appended", written);

    written = fwrite("\nUnd jetzt gehe ich ins Bett", sizeof(char), (size_t)28, stream);

    fclose(stream);

    return 0;
}