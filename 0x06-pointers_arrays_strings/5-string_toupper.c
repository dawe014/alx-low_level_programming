#include"main.h"
#include<string.h>
#include<ctype.h>
/**
 * string_toupper - Changes all lowerscase letter of string tu uppercase
 * @str: string to convert
 * Return: pointer to modified string
*/
char *string_toupper(char *str)
{
	size_t len = strlen(str);
	size_t i;

	for (i = 0; i < len; i++)
	{
		str[i] = toupper((unsigned char) str[i]);
	}
	return (str);
}
