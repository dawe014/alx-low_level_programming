#include<stdarg.h>
#include"variadic_functions.h"
/**
 * sum_them_all - calculate the sum of a variable number of integer
 * @n: the number of integer to be sum
 * @...: the integers to be summed
 * Return: The sum of provided integer
*/
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list ptr;

	va_start(ptr, n);
	sum = 0;

	for (i = 0; i < n; i++)
		sum  = sum + va_arg(ptr, int);
	va_end(ptr);
	return (sum);
}
