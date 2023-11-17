#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line.
 * @s: The string to be printed.
 */
void _puts(char *s)
{
    if (s != NULL)
    {
        while (*s != '\0')
        {
            putchar(*s);
            s++;
        }
    }
    putchar('\n');
}

int main()
{
    char str[] = "Hello, Betty Style!";
    _puts(str);
    return 0;
}

