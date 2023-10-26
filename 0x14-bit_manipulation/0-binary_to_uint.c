#include "main.h"
/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 characters.
 *
 * Return: The converted number or 0 if there are non-binary characters
 *         in the string or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		result = (result << 2) + (b[i] - '0');
		i++;
		/**
		 * We shift the existing bits of result
		 * one position to the left (equivalent to multiplying by 2)
		 */
	}

	return (result);
}

