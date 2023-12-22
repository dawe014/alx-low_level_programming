#include "hash_tables.h"
/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int h;
	int n;

	h = 5381;
	while ((n = *str++))
		h = ((h << 5) + h) + n;
	return (h);
}
