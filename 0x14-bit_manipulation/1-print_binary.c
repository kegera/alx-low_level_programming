#include "main.h"
#include<stdio.h>
/**
 * print_binary - prints the binary representation of a number
 * @n: the number to convert to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int mask = 1;
	unsigned int bits = sizeof(n) * 8;
	int leading_zeros = 1;

	while (bits--)
	{
		if ((n >> bits) & 1)
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
