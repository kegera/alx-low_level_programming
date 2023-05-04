#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: char string
 * Return: converted decimal number or 0 if there is an unconvertable char
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int ui = 0;
	int len, baseTwo;

	if (!b)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (len--, baseTwo = 1; len >= 0; len--, baseTwo *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}

		if (b[len] & 1)
		{
			ui += baseTwo;
		}
	}

	return (ui);
}
