#include <stdio.h>

/**
 * flip_bits - Counts the number of bits needed to flip from n to m.
 * @n: The first unsigned long integer.
 * @m: The second unsigned long integer.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i, flips = 0;
	unsigned long int j = sizeof(unsigned long int) * 8;

	for (i = 0; i < j; i++)
	{
		if ((m & 1) != (n & 1))
			flips += 1;
		n = n >> 1;
		m = m >> 1;
	}
	return (flips);
}
