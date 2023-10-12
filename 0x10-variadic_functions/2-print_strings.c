#include<stdarg.h>
#include<stdio.h>
#include"variadic_functions.h"
/**
 * print_strings - prints string
 * @separator: separate string
 * @n: number of string to be printed
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%s", va_arg(ptr, char*));
		}
		else
		{
			printf("%s%s ", va_arg(ptr, char*), separator);
		}
	}
	printf("\n");
	va_end(ptr);
}
