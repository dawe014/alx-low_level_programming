#include "main.h"


/**
 * _stringlen - find the length of a string
 * @ch: pointer to the string to check
 * Return: void
*/


int _stringlen(const char *ch)
{
int i = 0;
while (ch[i])
	i++;

return (i);
}


/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: binary number
 *
 * Return: 0 or converted number
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int num = 0;
	int i, len;

	len = _stringlen(b);

	for (i = 0; i != len; i++)
	{
		if (b[len - i - 1] == '1')
			num += 1 << i;
		else if (b[len - i - 1] != '0')
			return (0);
	}

	return (num);
}
