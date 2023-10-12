#include<stdarg.h>
#include<stdio.h>
#include"variadic_functions.h"
/**
 * print_numbers - print numbers followed by new line
 * @separetor: is string to be printed between numbers
 * @n: number of integer to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		if (i == n-1)
		{
			printf("%d", va_arg(ptr, int));
		}
		else
		{
		printf("%d%s ", va_arg(ptr, int), separator);
		}
	}
	printf("\n");
	va_end(ptr);
}
