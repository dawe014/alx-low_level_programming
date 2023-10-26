#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the unsigned long integer to modify.
 * @index: The index, starting from 0, of the bit to set to 1.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);  /* Check if index is out of range */

	*n = *n | (1UL << index);  /* Set the bit to 1 using a bitwise OR operation */

	return (1);
}
