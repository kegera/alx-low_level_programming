#include "main.h"

/**
 * print_binary - Prints the binary representation of a number
 * @n: Number to convert to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned int size = sizeof(unsigned long int) * 8;
	int leading_zeros = 1;

	for (unsigned int i = 0; i < size; i++)
	{
		unsigned long int mask = (unsigned long int)1 << (size - i - 1);
		if ((n & mask) != 0)
		{
			leading_zeros = 0;
			_putchar('1');
		}
		else if (!leading_zeros)
		{
			_putchar('0');
		}
	}
	if (leading_zeros)
	{
		_putchar('0');
	}
}
