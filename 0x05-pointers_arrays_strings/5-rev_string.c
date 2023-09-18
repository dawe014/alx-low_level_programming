#include <string.h>
#include "main.h"
/**
 * rev_string - Reverse the string
 * @s: The string reversed
 */
void rev_string(char *s)
{
	int i;
	int j;
	int len;

	len = strlen(s);
	i = 0;
	j = len - 1;

	while (i < j)
	{
		char c = s[i];

		s[i] = s[j];
		s[j] = c;
		i++;
		j--;
	}
}
