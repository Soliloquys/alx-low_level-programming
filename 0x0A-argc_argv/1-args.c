#include <stdio.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into name the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*unused param bypass*/
        printf("%d\n", argc - 1);

        return (0);
}
