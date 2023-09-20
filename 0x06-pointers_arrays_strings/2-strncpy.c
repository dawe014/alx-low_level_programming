#include"main.h"
#include<string.h>
/**
 * _strncpy - Coppies two strings
 * @dest: destination of the string
 * @src: cource of the string
 * @n: number of byte to be coppied
 * Return: a pointer to resulting string
*/
char *_strncpy(char *dest, char *src, int n)
{
strncpy(dest, src, n);
return (dest);
}
