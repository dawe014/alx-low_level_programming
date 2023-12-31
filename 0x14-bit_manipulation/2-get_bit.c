#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The unsigned long integer.
 * @index: The index, starting from 0, of the bit to retrieve.
 *
 * Return: The value of the bit at index or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);  /* Check if index is out of range */

	return ((int)((n >> index) & 1));
}
