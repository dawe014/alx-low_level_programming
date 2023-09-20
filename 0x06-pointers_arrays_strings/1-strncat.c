#include"main.h"
#include<string.h>
/**
 * _strncat - Concatenates to strings n bytes
 * @dest: destination of the string
 * @src: the source string
 * @n: numbers of byte it append
 * Return: apointer to resulting string
*/
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
