#include <string.h>
#include "main.h"
/**
 * puts_half - Print half of String
 * @str: The string to be printed
 */
void puts_half(char *str)
{
	int i;
	int j;
	int len;

	len = strlen(str);
	if (len % 2 != 0)
	{
		j = (len - 1) / 2;
		for (i = j; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		j = len / 2;
		for (i = j; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
