#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, and then in uppercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lett;

	for (lett = 'a'; lett <= 'z'; lett++)
		putchar(lett);
	for (lett = 'A'; lett <= 'Z'; lett++)
		putchar(lett);
	putchar('\n');
	return (0);
}

