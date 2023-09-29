#include"main.h"
/**
 * factorial - Calculate the factorial of a given number
 * @n: The number for which to calculate the factorial
 * Return: The factorial of the given number. If @n is negative, returns -1
 * If @n is 0 it returns 1
*/
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	if (n < 0)
	{
		return (-1);
	}

	return (n * factorial(n - 1));
}
