#include "main.h"

/**
 * print_binary - Prints the binary representation of a number.
 * @n: The unsigned long integer to be printed in binary.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);  /* Right shift to get the next bit */

	_putchar((n & 1) + '0');    /* Print the last bit as '0' or '1' */
}
