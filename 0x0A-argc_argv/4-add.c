#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array containing the command-line arguments
 *
 * Return: 0 if successful, 1 if there's an error
 */
int main(int argc, char *argv[])
{
    int sum = 0;
    int i, j;
    char *arg;
    int num;

    /* Check if there are command-line arguments */
    if (argc == 1)
    {
        printf("0\n");
        return (0);
    }

    /* Loop through the command-line arguments and add positive numbers */
    for (i = 1; i < argc; i++)
    {
        arg = argv[i];

        /* Check if the argument contains non-digit characters */
        for (j = 0; arg[j] != '\0'; j++)
        {
            if (!isdigit(arg[j]))
            {
                printf("Error\n");
                return (1);
            }
        }

        /* Convert the argument to an integer and add it to the sum */
        num = atoi(arg);
        sum += num;
    }

    /* Print the result */
    printf("%d\n", sum);

    return (0);
}

