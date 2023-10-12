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
	char *str;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(nil)";
		if (!separator)
			printf("%s", str);
		else if (separator && i == 0)
			printf("%s", str);
		else
			printf("%s%s", separator, str);
	}
	printf("\n");
	va_end(ptr);
}
