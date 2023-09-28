#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - function that converts a binary unmber to an unsigned int
 * @b: pointer to the binary number passed as a string
 *
 * Return: result, the unsigned int value
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
		{
			return (0);
		}
		result = (result << 1) | (*b - '0');
		b++;
	}
	return (result);
}
