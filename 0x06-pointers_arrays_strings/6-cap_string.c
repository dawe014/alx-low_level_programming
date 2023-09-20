#include"main.h"
#include<string.h>
#include<ctype.h>
/**
 * cap_string - Capitalize all words of string
 * @str: string to capitalize
 * Return: pointer to capitalized string
*/
char *cap_string(char *str)
{
	size_t len = strlen(str);
	size_t i;

	for (i = 0; i < len; i++)
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			str[i + 1] = toupper((unsigned char)str[i + 1]);
		}
		else if (str[i] == '.')
		{
			if (str[i + 1] != ' ' || str[i + 1] != '\n' || str[i + 1] != '\t')
				str[i + 1] = toupper((unsigned char)str[i + 1]);
		}
	}
	return (str);
}
